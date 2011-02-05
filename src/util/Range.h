/*
 * Xournal++
 *
 * Range
 *
 * @author Xournal Team
 * http://xournal.sf.net
 *
 * @license GPL
 */

#ifndef RANGE_H_
#define RANGE_H_

class Range {
public:
	Range(double x, double y);
	virtual ~Range();

	void addPoint(double x, double y);

	double getX();
	double getY();
	double getWidth();
	double getHeight();

private:
	double x1;
	double y1;
	double y2;
	double x2;
};

#endif /* RANGE_H_ */
