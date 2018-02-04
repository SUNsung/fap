
        
            def short_desc(self):
        '''
        A short description of the command
        '''
        return ''
    
    '''
    
    class User(Base):
    '''Declarative class to do query in upgrade'''
    __tablename__ = 'ab_user'
    id = Column(Integer, primary_key=True)
    
    # revision identifiers, used by Alembic.
revision = '3c3ffe173e4f'
down_revision = 'ad82a75afd82'
    
    
def downgrade():
    try:
        op.drop_column('dbs', 'allow_run_sync')
        op.drop_column('dbs', 'allow_run_async')
    except Exception:
        pass
    
    
def upgrade():
    op.create_table('dashboard_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('dashboard_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['dashboard_id'], [u'dashboards.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    op.create_table('slice_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('slice_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['slice_id'], [u'slices.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    
    # revision identifiers, used by Alembic.
revision = '7dbf98566af7'
down_revision = '8e80a26a31db'
    
        def test_cat_adapter_shall_make_noise(self):
        cat = Cat()
        cat_adapter = Adapter(cat, make_noise=cat.meow)
        noise = cat_adapter.make_noise()
        expected_noise = 'meow!'
        self.assertEqual(noise, expected_noise)
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
        def test_sales_manager_shall_talk_through_proxy_with_delay(cls):
        cls.p.busy = 'No'
        start_time = time()
        cls.p.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
Sales Manager ready to talk\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
        def test_num_floor_in_house(self):
        self.assertEqual(self.building.floor, 'More than One')

    
        def test_parrot_eng_localization(self):
        self.assertEqual(self.e.get('parrot'), 'parrot')
    
        def test_shall_toggle_from_fm_to_am(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)

    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    '''
Port of the Java example of 'Constructor Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050)
    
    if __name__ == '__main__':
    main()
    
        def setTC(self, tc):
        self._tc = tc
    
    update = True
    
            distance = (cor1[0][0] - cor2[0][0])**2 + (cor1[0][1] - cor2[0][1])**2
        distance = distance ** 0.5
        print('distance = ', distance)
        jump(distance)
        update = True