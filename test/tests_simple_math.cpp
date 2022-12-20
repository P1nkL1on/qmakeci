#include <QtTest>

class TestsSimpleMath : public QObject
{
    Q_OBJECT
private slots:
    void compare2and2();
    void newBadTest();
};

void TestsSimpleMath::compare2and2()
{
    QCOMPARE(2, 2);
}

void TestsSimpleMath::newBadTest()
{
    QVERIFY(!!0);
}

QTEST_APPLESS_MAIN(TestsSimpleMath)

#include "tests_simple_math.moc"
