
        
                expected = unittest.TestSuite([testcase_1, testcase_2])
        self.assertEqual(list(suite), [expected])
    
        def test_multiplicative(self):
        # Multiplicative
        self.check_tokenize('x = 1//1*1/5*12%0x12@42', '''\
    NAME       'x'           (1, 0) (1, 1)
    OP         '='           (1, 2) (1, 3)
    NUMBER     '1'           (1, 4) (1, 5)
    OP         '//'          (1, 5) (1, 7)
    NUMBER     '1'           (1, 7) (1, 8)
    OP         '*'           (1, 8) (1, 9)
    NUMBER     '1'           (1, 9) (1, 10)
    OP         '/'           (1, 10) (1, 11)
    NUMBER     '5'           (1, 11) (1, 12)
    OP         '*'           (1, 12) (1, 13)
    NUMBER     '12'          (1, 13) (1, 15)
    OP         '%'           (1, 15) (1, 16)
    NUMBER     '0x12'        (1, 16) (1, 20)
    OP         '@'           (1, 20) (1, 21)
    NUMBER     '42'          (1, 21) (1, 23)
    ''')
    
            for button, filename, name in button_sources:
            with  self.subTest(name=name):
                button.invoke()
                fn = findfile(filename, subdir='idlelib')
                get = dialog._current_textview.viewframe.textframe.text.get
                with open(fn, encoding='utf-8') as f:
                    self.assertEqual(f.readline().strip(), get('1.0', '1.end'))
                    f.readline()
                    self.assertEqual(f.readline().strip(), get('3.0', '3.end'))
                dialog._current_textview.destroy()
    
            self._copy_file_without_generated_symbols(SYMBOL_FILE, output)
    
    # Simple class representing a record in our database.
MemoRecord = namedtuple('MemoRecord', 'key, task')
    
    # Send the message via local SMTP server.
with smtplib.SMTP('localhost') as s:
    s.send_message(msg)

    
    from email.message import EmailMessage
from email.policy import SMTP
    
    from email.policy import default
    
    while True:
    line = input()
    if line == '':
        break
    buffer += line
    if sqlite3.complete_statement(buffer):
        try:
            buffer = buffer.strip()
            cur.execute(buffer)
    
    if os.path.exists(DB_FILE):
    os.remove(DB_FILE)
    
    # 128  --> 0.79
# 256  --> 0.92
# 512  --> 0.986
# 1024 --> 0.99944
# 2048 --> 0.99999
#
# Idea Distribution Ratio = 0.98653 / (1-0.98653) = 73.24
# Random Distribution Ration = 512 / (2350-512) = 0.279.
# 
# Typical Distribution Ratio  
    
    # flake8: noqa

    
    Latin5_BulgarianCharToOrderMap = (
255,255,255,255,255,255,255,255,255,255,254,255,255,254,255,255,  # 00
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 10
253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,  # 20
252,252,252,252,252,252,252,252,252,252,253,253,253,253,253,253,  # 30
253, 77, 90, 99,100, 72,109,107,101, 79,185, 81,102, 76, 94, 82,  # 40
110,186,108, 91, 74,119, 84, 96,111,187,115,253,253,253,253,253,  # 50
253, 65, 69, 70, 66, 63, 68,112,103, 92,194,104, 95, 86, 87, 71,  # 60
116,195, 85, 93, 97,113,196,197,198,199,200,253,253,253,253,253,  # 70
194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,  # 80
210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,  # 90
 81,226,227,228,229,230,105,231,232,233,234,235,236, 45,237,238,  # a0
 31, 32, 35, 43, 37, 44, 55, 47, 40, 59, 33, 46, 38, 36, 41, 30,  # b0
 39, 28, 34, 51, 48, 49, 53, 50, 54, 57, 61,239, 67,240, 60, 56,  # c0
  1, 18,  9, 20, 11,  3, 23, 15,  2, 26, 12, 10, 14,  6,  4, 13,  # d0
  7,  8,  5, 19, 29, 25, 22, 21, 27, 24, 17, 75, 52,241, 42, 16,  # e0
 62,242,243,244, 58,245, 98,246,247,248,249,250,251, 91,252,253,  # f0
)
    
    win1253_CharToOrderMap = (
255,255,255,255,255,255,255,255,255,255,254,255,255,254,255,255,  # 00
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 10
253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,  # 20
252,252,252,252,252,252,252,252,252,252,253,253,253,253,253,253,  # 30
253, 82,100,104, 94, 98,101,116,102,111,187,117, 92, 88,113, 85,  # 40
 79,118,105, 83, 67,114,119, 95, 99,109,188,253,253,253,253,253,  # 50
253, 72, 70, 80, 81, 60, 96, 93, 89, 68,120, 97, 77, 86, 69, 55,  # 60
 78,115, 65, 66, 58, 76,106,103, 87,107,112,253,253,253,253,253,  # 70
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 80
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 90
253,233, 61,253,253,253,253,253,253,253,253,253,253, 74,253,253,  # a0
253,253,253,253,247,253,253, 36, 46, 71, 73,253, 54,253,108,123,  # b0
110, 31, 51, 43, 41, 34, 91, 40, 52, 47, 44, 53, 38, 49, 59, 39,  # c0
 35, 48,250, 37, 33, 45, 56, 50, 84, 57,120,121, 17, 18, 22, 15,  # d0
124,  1, 29, 20, 21,  3, 32, 13, 25,  5, 11, 16, 10,  6, 30,  4,  # e0
  9,  8, 14,  7,  2, 12, 28, 23, 42, 24, 64, 75, 19, 26, 27,253,  # f0
)
    
    # Model Table:
# total sequences: 100%
# first 512 sequences: 94.7368%
# first 1024 sequences:5.2623%
# rest  sequences:     0.8894%
# negative sequences:  0.0009%
HungarianLangModel = (
0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,2,3,3,1,1,2,2,2,2,2,1,2,
3,2,2,3,3,3,3,3,2,3,3,3,3,3,3,1,2,3,3,3,3,2,3,3,1,1,3,3,0,1,1,1,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,
3,2,1,3,3,3,3,3,2,3,3,3,3,3,1,1,2,3,3,3,3,3,3,3,1,1,3,2,0,1,1,1,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
3,3,3,3,3,3,3,3,3,3,3,1,1,2,3,3,3,1,3,3,3,3,3,1,3,3,2,2,0,3,2,3,
0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,
3,3,3,3,3,3,2,3,3,3,2,3,3,2,3,3,3,3,3,2,3,3,2,2,3,2,3,2,0,3,2,2,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,
3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,3,1,2,3,2,2,3,1,2,3,3,2,2,0,3,3,3,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,0,2,3,2,
0,0,0,1,1,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,3,3,3,3,3,3,3,3,3,3,1,1,1,3,3,2,1,3,2,2,3,2,1,3,2,2,1,0,3,3,1,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,2,2,3,3,3,3,3,1,2,3,3,3,3,1,2,1,3,3,3,3,2,2,3,1,1,3,2,0,1,1,1,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,2,1,3,3,3,3,3,2,2,1,3,3,3,0,1,1,2,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,2,3,3,3,2,0,3,2,3,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,1,0,
3,3,3,3,3,3,2,3,3,3,2,3,2,3,3,3,1,3,2,2,2,3,1,1,3,3,1,1,0,3,3,2,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,3,3,3,3,3,3,2,3,3,3,2,3,2,3,3,3,2,3,3,3,3,3,1,2,3,2,2,0,2,2,2,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,3,3,2,2,2,3,1,3,3,2,2,1,3,3,3,1,1,3,1,2,3,2,3,2,2,2,1,0,2,2,2,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,
3,1,1,3,3,3,3,3,1,2,3,3,3,3,1,2,1,3,3,3,2,2,3,2,1,0,3,2,0,1,1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,1,1,3,3,3,3,3,1,2,3,3,3,3,1,1,0,3,3,3,3,0,2,3,0,0,2,1,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,3,3,3,3,3,2,2,3,3,2,2,2,2,3,3,0,1,2,3,2,3,2,2,3,2,1,2,0,2,2,2,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,
3,3,3,3,3,3,1,2,3,3,3,2,1,2,3,3,2,2,2,3,2,3,3,1,3,3,1,1,0,2,3,2,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,3,3,1,2,2,2,2,3,3,3,1,1,1,3,3,1,1,3,1,1,3,2,1,2,3,1,1,0,2,2,2,
0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,3,3,2,1,2,1,1,3,3,1,1,1,1,3,3,1,1,2,2,1,2,1,1,2,2,1,1,0,2,2,1,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,3,3,1,1,2,1,1,3,3,1,0,1,1,3,3,2,0,1,1,2,3,1,0,2,2,1,0,0,1,3,2,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,2,1,3,3,3,3,3,1,2,3,2,3,3,2,1,1,3,2,3,2,1,2,2,0,1,2,1,0,0,1,1,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
3,3,3,3,2,2,2,2,3,1,2,2,1,1,3,3,0,3,2,1,2,3,2,1,3,3,1,1,0,2,1,3,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,3,3,2,2,2,3,2,3,3,3,2,1,1,3,3,1,1,1,2,2,3,2,3,2,2,2,1,0,2,2,1,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
1,0,0,3,3,3,3,3,0,0,3,3,2,3,0,0,0,2,3,3,1,0,1,2,0,0,1,1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,1,2,3,3,3,3,3,1,2,3,3,2,2,1,1,0,3,3,2,2,1,2,2,1,0,2,2,0,1,1,1,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,3,2,2,1,3,1,2,3,3,2,2,1,1,2,2,1,1,1,1,3,2,1,1,1,1,2,1,0,1,2,1,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
2,3,3,1,1,1,1,1,3,3,3,0,1,1,3,3,1,1,1,1,1,2,2,0,3,1,1,2,0,2,1,1,
0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
3,1,0,1,2,1,2,2,0,1,2,3,1,2,0,0,0,2,1,1,1,1,1,2,0,0,1,1,0,0,0,0,
1,2,1,2,2,2,1,2,1,2,0,2,0,2,2,1,1,2,1,1,2,1,1,1,0,1,0,0,0,1,1,0,
1,1,1,2,3,2,3,3,0,1,2,2,3,1,0,1,0,2,1,2,2,0,1,1,0,0,1,1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,0,0,3,3,2,2,1,0,0,3,2,3,2,0,0,0,1,1,3,0,0,1,1,0,0,2,1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,1,1,2,2,3,3,1,0,1,3,2,3,1,1,1,0,1,1,1,1,1,3,1,0,0,2,2,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,1,1,1,2,2,2,1,0,1,2,3,3,2,0,0,0,2,1,1,1,2,1,1,1,0,1,1,1,0,0,0,
1,2,2,2,2,2,1,1,1,2,0,2,1,1,1,1,1,2,1,1,1,1,1,1,0,1,1,1,0,0,1,1,
3,2,2,1,0,0,1,1,2,2,0,3,0,1,2,1,1,0,0,1,1,1,0,1,1,1,1,0,2,1,1,1,
2,2,1,1,1,2,1,2,1,1,1,1,1,1,1,2,1,1,1,2,3,1,1,1,1,1,1,1,1,1,0,1,
2,3,3,0,1,0,0,0,3,3,1,0,0,1,2,2,1,0,0,0,0,2,0,0,1,1,1,0,2,1,1,1,
2,1,1,1,1,1,1,2,1,1,0,1,1,0,1,1,1,0,1,2,1,1,0,1,1,1,1,1,1,1,0,1,
2,3,3,0,1,0,0,0,2,2,0,0,0,0,1,2,2,0,0,0,0,1,0,0,1,1,0,0,2,0,1,0,
2,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2,0,1,1,1,1,1,0,1,
3,2,2,0,1,0,1,0,2,3,2,0,0,1,2,2,1,0,0,1,1,1,0,0,2,1,0,1,2,2,1,1,
2,1,1,1,1,1,1,2,1,1,1,1,1,1,0,2,1,0,1,1,0,1,1,1,0,1,1,2,1,1,0,1,
2,2,2,0,0,1,0,0,2,2,1,1,0,0,2,1,1,0,0,0,1,2,0,0,2,1,0,0,2,1,1,1,
2,1,1,1,1,2,1,2,1,1,1,2,2,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,0,1,
1,2,3,0,0,0,1,0,3,2,1,0,0,1,2,1,1,0,0,0,0,2,1,0,1,1,0,0,2,1,2,1,
1,1,0,0,0,1,0,1,1,1,1,1,2,0,0,1,0,0,0,2,0,0,1,1,1,1,1,1,1,1,0,1,
3,0,0,2,1,2,2,1,0,0,2,1,2,2,0,0,0,2,1,1,1,0,1,1,0,0,1,1,2,0,0,0,
1,2,1,2,2,1,1,2,1,2,0,1,1,1,1,1,1,1,1,1,2,1,1,0,0,1,1,1,1,0,0,1,
1,3,2,0,0,0,1,0,2,2,2,0,0,0,2,2,1,0,0,0,0,3,1,1,1,1,0,0,2,1,1,1,
2,1,0,1,1,1,0,1,1,1,1,1,1,1,0,2,1,0,0,1,0,1,1,0,1,1,1,1,1,1,0,1,
2,3,2,0,0,0,1,0,2,2,0,0,0,0,2,1,1,0,0,0,0,2,1,0,1,1,0,0,2,1,1,0,
2,1,1,1,1,2,1,2,1,2,0,1,1,1,0,2,1,1,1,2,1,1,1,1,0,1,1,1,1,1,0,1,
3,1,1,2,2,2,3,2,1,1,2,2,1,1,0,1,0,2,2,1,1,1,1,1,0,0,1,1,0,1,1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
2,2,2,0,0,0,0,0,2,2,0,0,0,0,2,2,1,0,0,0,1,1,0,0,1,2,0,0,2,1,1,1,
2,2,1,1,1,2,1,2,1,1,0,1,1,1,1,2,1,1,1,2,1,1,1,1,0,1,2,1,1,1,0,1,
1,0,0,1,2,3,2,1,0,0,2,0,1,1,0,0,0,1,1,1,1,0,1,1,0,0,1,0,0,0,0,0,
1,2,1,2,1,2,1,1,1,2,0,2,1,1,1,0,1,2,0,0,1,1,1,0,0,0,0,0,0,0,0,0,
2,3,2,0,0,0,0,0,1,1,2,1,0,0,1,1,1,0,0,0,0,2,0,0,1,1,0,0,2,1,1,1,
2,1,1,1,1,1,1,2,1,0,1,1,1,1,0,2,1,1,1,1,1,1,0,1,0,1,1,1,1,1,0,1,
1,2,2,0,1,1,1,0,2,2,2,0,0,0,3,2,1,0,0,0,1,1,0,0,1,1,0,1,1,1,0,0,
1,1,0,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,0,0,1,1,1,0,1,0,1,
2,1,0,2,1,1,2,2,1,1,2,1,1,1,0,0,0,1,1,0,1,1,1,1,0,0,1,1,1,0,0,0,
1,2,2,2,2,2,1,1,1,2,0,2,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,0,0,1,0,
1,2,3,0,0,0,1,0,2,2,0,0,0,0,2,2,0,0,0,0,0,1,0,0,1,0,0,0,2,0,1,0,
2,1,1,1,1,1,0,2,0,0,0,1,2,1,1,1,1,0,1,2,0,1,0,1,0,1,1,1,0,1,0,1,
2,2,2,0,0,0,1,0,2,1,2,0,0,0,1,1,2,0,0,0,0,1,0,0,1,1,0,0,2,1,0,1,
2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,0,1,1,1,1,1,0,1,
1,2,2,0,0,0,1,0,2,2,2,0,0,0,1,1,0,0,0,0,0,1,1,0,2,0,0,1,1,1,0,1,
1,0,1,1,1,1,1,1,0,1,1,1,1,0,0,1,0,0,1,1,0,1,0,1,1,1,1,1,0,0,0,1,
1,0,0,1,0,1,2,1,0,0,1,1,1,2,0,0,0,1,1,0,1,0,1,1,0,0,1,0,0,0,0,0,
0,2,1,2,1,1,1,1,1,2,0,2,0,1,1,0,1,2,1,0,1,1,1,0,0,0,0,0,0,1,0,0,
2,1,1,0,1,2,0,0,1,1,1,0,0,0,1,1,0,0,0,0,0,1,0,0,1,0,0,0,2,1,0,1,
2,2,1,1,1,1,1,2,1,1,0,1,1,1,1,2,1,1,1,2,1,1,0,1,0,1,1,1,1,1,0,1,
1,2,2,0,0,0,0,0,1,1,0,0,0,0,2,1,0,0,0,0,0,2,0,0,2,2,0,0,2,0,0,1,
2,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,0,0,0,1,1,1,1,0,0,1,1,1,1,0,0,1,
1,1,2,0,0,3,1,0,2,1,1,1,0,0,1,1,1,0,0,0,1,1,0,0,0,1,0,0,1,0,1,0,
1,2,1,0,1,1,1,2,1,1,0,1,1,1,1,1,0,0,0,1,1,1,1,1,0,1,0,0,0,1,0,0,
2,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,2,0,0,0,
2,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,2,1,1,0,0,1,1,1,1,1,0,1,
2,1,1,1,2,1,1,1,0,1,1,2,1,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,1,0,1,1,1,1,1,0,0,1,1,2,1,0,0,0,1,1,0,0,0,1,1,0,0,1,0,1,0,0,0,
1,2,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,1,0,0,
2,0,0,0,1,1,1,1,0,0,1,1,0,0,0,0,0,1,1,1,2,0,0,1,0,0,1,0,1,0,0,0,
0,1,1,1,1,1,1,1,1,2,0,1,1,1,1,0,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,
1,0,0,1,1,1,1,1,0,0,2,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,
0,1,1,1,1,1,1,0,1,1,0,1,0,1,1,0,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,
1,0,0,1,1,1,0,0,0,0,1,0,2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,
0,1,1,1,1,1,0,0,1,1,0,1,0,1,0,0,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,1,0,0,0,0,0,0,1,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,1,1,1,0,1,0,0,1,1,0,1,0,1,1,0,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,
2,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1,0,0,1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,0,0,1,1,1,1,0,0,0,1,1,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,1,1,1,1,1,1,0,1,1,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,
)