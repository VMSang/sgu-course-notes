#include <bits/stdc++.h>
using namespace std;

int fr, n, *a;

// Thuật toán FIFO
void FIFO() {
    queue<int> q;  // Hàng đợi FIFO
    unordered_set<int> s;  // Tập hợp các trang trong bộ nhớ
    int page_faults = 0;  // Số lần thay trang
    vector<vector<int>> table(fr, vector<int>(n, -1));  // Lưu trạng thái bộ nhớ sau mỗi bước
    vector<int> fault(n, 0);  // Lưu kết quả có lỗi trang (dấu sao *)

    for (int i = 0; i < n; i++) {
        // Nếu trang chưa có trong bộ nhớ
        if (s.find(a[i]) == s.end()) {
            // Nếu bộ nhớ đầy, thay thế trang theo FIFO
            if (q.size() == fr) {
                int oldest = q.front();
                q.pop();  // Loại trang lâu nhất
                s.erase(oldest);  // Xóa khỏi bộ nhớ
            }
            // Thêm trang mới
            q.push(a[i]);
            s.insert(a[i]);
            page_faults++;  // Đếm lần thay trang
            fault[i] = 1;   // Đánh dấu lỗi trang
        }

        // Cập nhật trạng thái bộ nhớ
        queue<int> temp = q;
        vector<int> mem(fr, -1);
        int idx = 0;
        while (!temp.empty()) {
            mem[idx++] = temp.front();
            temp.pop();
        }
        for (int j = 0; j < fr; j++) {
            table[j][i] = mem[j];
        }
    }

    // In ra bảng trạng thái bộ nhớ
    cout << "Truy cap trang: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    for (int i = 0; i < fr; i++) {
        for (int j = 0; j < n; j++) {
            if (table[i][j] == -1) cout << "  ";
            else cout << table[i][j] << " ";
        }
        cout << endl;
    }

    // In ra lỗi trang (dấu sao)
    for (int i = 0; i < n; i++) {
        if (fault[i]) cout << "* ";
        else cout << "  ";
    }
    cout << endl;

    cout << "Tong so loi trang: " << page_faults << endl;
}

// Dự đoán trang nào sẽ được sử dụng muộn nhất trong thuật toán Optimal
int predict(int pages[], vector<int>& memory, int pn, int index) {
    int res = -1, farthest = index;
    for (int i = 0; i < fr; i++) {
        int j;
        for (j = index; j < pn; j++) {
            if (memory[i] == pages[j]) {
                if (j > farthest) {
                    farthest = j;
                    res = i;
                }
                break;
            }
        }
        if (j == pn) return i;  // Trang này không còn được sử dụng nữa
    }
    return (res == -1) ? 0 : res;
}

// Thuật toán Optimal
void Optimal() {
    vector<int> memory(fr, -1);  // Khung trang
    vector<vector<int>> table(fr, vector<int>(n, -1));  // Lưu trạng thái bộ nhớ
    vector<int> fault(n, 0);  // Lưu dấu lỗi trang (dấu sao)
    int page_faults = 0;  // Số lỗi trang

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < fr; j++) {
            if (memory[j] == a[i]) {
                found = true;  // Trang đã có trong bộ nhớ
                break;
            }
        }
        if (!found) {
            if (i < fr) {
                memory[i] = a[i];  // Bộ nhớ chưa đầy, thêm trang trực tiếp
            } else {
                // Chọn trang thay thế bằng cách dự đoán trang sẽ lâu sử dụng nhất
                int j = predict(a, memory, n, i + 1);
                memory[j] = a[i];
            }
            page_faults++;  // Lỗi trang
            fault[i] = 1;   // Đánh dấu lỗi trang
        }

        // Cập nhật bảng trạng thái bộ nhớ
        for (int j = 0; j < fr; j++) {
            table[j][i] = memory[j];
        }
    }

    // In kết quả
    cout << "Truy cap trang: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    for (int i = 0; i < fr; i++) {
        for (int j = 0; j < n; j++) {
            if (table[i][j] == -1) cout << "  ";
            else cout << table[i][j] << " ";
        }
        cout << endl;
    }

    // In dấu sao cho lỗi trang
    for (int i = 0; i < n; i++) {
        if (fault[i]) cout << "* ";
        else cout << "  ";
    }
    cout << endl;

    cout << "Tong so loi trang: " << page_faults << endl;
}

// Thuật toán LRU (Least Recently Used)
void LRU() {
    list<int> memory;  // Lưu các trang trong bộ nhớ
    unordered_map<int, list<int>::iterator> position;  // Vị trí của các trang trong danh sách
    vector<vector<int>> table(fr, vector<int>(n, -1));  // Lưu trạng thái bộ nhớ
    vector<int> fault(n, 0);  // Lưu dấu lỗi trang (dấu sao)
    int page_faults = 0;  // Số lỗi trang

    for (int i = 0; i < n; i++) {
        // Nếu trang không có trong bộ nhớ
        if (position.find(a[i]) == position.end()) {
            if (memory.size() == fr) {
                int lru_page = memory.back();
                memory.pop_back();  // Loại trang ít được sử dụng nhất
                position.erase(lru_page);
            }
            // Thêm trang mới vào đầu danh sách
            memory.push_front(a[i]);
            position[a[i]] = memory.begin();
            page_faults++;  // Lỗi trang
            fault[i] = 1;   // Đánh dấu lỗi trang
        } else {
            // Đưa trang đã có trong bộ nhớ lên đầu danh sách
            memory.erase(position[a[i]]);
            memory.push_front(a[i]);
            position[a[i]] = memory.begin();
        }

        // Cập nhật bảng trạng thái bộ nhớ
        int idx = 0;
        for (int page : memory) {
            table[idx++][i] = page;
        }
    }

    // In kết quả
    cout << "Truy cap trang: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    for (int i = 0; i < fr; i++) {
        for (int j = 0; j < n; j++) {
            if (table[i][j] == -1) cout << "  ";
            else cout << table[i][j] << " ";
        }
        cout << endl;
    }

    // In dấu sao cho lỗi trang
    for (int i = 0; i < n; i++) {
        if (fault[i]) cout << "* ";
        else cout << "  ";
    }
    cout << endl;

    cout << "Tong so loi trang: " << page_faults << endl;
}

int main() {
    cin >> fr >> n;
    a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "FIFO Algorithm:\n";
    FIFO();

    cout << "\nOptimal Algorithm:\n";
    Optimal();

    cout << "\nLRU Algorithm:\n";
    LRU();

    delete[] a;
    return 0;
}
