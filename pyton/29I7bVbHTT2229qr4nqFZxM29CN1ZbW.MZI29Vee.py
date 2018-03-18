
        
        
def check_format(filename):
    '''
    validates that each line is formatted correctly,
    appending to error list as needed
    '''
    with open(filename) as fp:
        lines = list(line.rstrip() for line in fp)
    check_alphabetical(lines)
    # START Check Entries
    num_in_category = min_entries_per_section + 1
    category = ''
    category_line = 0
    for line_num, line in enumerate(lines):
        if section_title_re.match(line):
            title_links.append(section_title_re.match(line).group(1))
        # check each section for the minimum number of entries
        if line.startswith(anchor):
            match = anchor_re.match(line)
            if match:
                if match.group(1) not in title_links:
                    add_error(line_num, 'section header ({}) not added as a title link'.format(match.group(1)))
            else:
                add_error(line_num, 'section header is not formatted correctly')
            if num_in_category < min_entries_per_section:
                add_error(category_line, '{} section does not have the minimum {} entries (only has {})'.format(
                    category, min_entries_per_section, num_in_category))
            category = line.split(' ')[1]
            category_line = line_num
            num_in_category = 0
            continue
        # skips lines that we do not care about
        if not line.startswith('|') or line.startswith('|---'):
            continue
        num_in_category += 1
        segments = line.split('|')[1:-1]
        # START Global
        for segment in segments:
            # every line segment should start and end with exactly 1 space
            if len(segment) - len(segment.lstrip()) != 1 or len(segment) - len(segment.rstrip()) != 1:
                add_error(line_num, 'each segment must start and end with exactly 1 space')
        # END Global
        segments = [seg.strip() for seg in segments]
        check_entry(line_num, segments)
    # END Check Entries
    
                # Use main dttm column to support index with secondary dttm columns
            if db_engine_spec.time_secondary_columns and \
                    self.main_dttm_col in self.dttm_cols and \
                    self.main_dttm_col != dttm_col.column_name:
                time_filters.append(cols[self.main_dttm_col].
                                    get_time_filter(from_dttm, to_dttm))
            time_filters.append(dttm_col.get_time_filter(from_dttm, to_dttm))
    
        # DESCRIBE | DESC qualifiedName
    def test_describe(self):
        self.assertEquals({'t1'}, self.extract_tables('DESCRIBE t1'))
        self.assertEquals({'t1'}, self.extract_tables('DESC t1'))
    
        # 2. Clean up None permissions or view menues
    pvms = sm.get_session.query(sm.permissionview_model).all()
    for pvm in pvms:
        if not (pvm.view_menu and pvm.permission):
            sm.get_session.delete(pvm)
    sm.get_session.commit()
    
        @classmethod
    def datetime_conversion_rate(cls, data_series):
        success = 0
        total = 0
        for value in data_series:
            total += 1
            try:
                pd.to_datetime(value)
                success += 1
            except Exception:
                continue
        return 100 * success / total
    
    
def import_from_dict(session, data, sync=[]):
    '''Imports databases and druid clusters from dictionary'''
    if isinstance(data, dict):
        logging.info('Importing %d %s',
                     len(data.get(DATABASES_KEY, [])),
                     DATABASES_KEY)
        for database in data.get(DATABASES_KEY, []):
            Database.import_from_dict(session, database, sync=sync)