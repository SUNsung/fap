
        
                def test_url_sub_key_for_sqlite3
          spec = resolve :production, 'production' => { 'url' => 'sqlite3:foo?encoding=utf8' }
          assert_equal({
            'adapter'  => 'sqlite3',
            'database' => 'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
          # Appends a column or columns of a specified type.
      #
      #  t.string(:goat)
      #  t.string(:goat, :sheep)
      #
      # See TableDefinition#column
      [
        :bigint,
        :binary,
        :boolean,
        :date,
        :datetime,
        :decimal,
        :float,
        :integer,
        :json,
        :string,
        :text,
        :time,
        :timestamp,
        :virtual,
      ].each do |column_type|
        module_eval <<-CODE, __FILE__, __LINE__ + 1
          def #{column_type}(*args, **options)
            args.each { |name| column(name, :#{column_type}, options) }
          end
        CODE
      end
      alias_method :numeric, :decimal
    end
    
          def test_create_table_with_timestamps_should_create_datetime_columns_with_options
        connection.create_table table_name do |t|
          t.timestamps null: true
        end
        created_columns = connection.columns(table_name)
    
      def test_assert_called_failure
    error = assert_raises(Minitest::Assertion) do
      assert_called(@object, :increment) do
        # Call nothing...
      end
    end
    
        def extract_body(response)
      ''.dup.tap do |body|
        response[2].each { |chunk| body << chunk }
      end
    end
    
      test 'broadcasts_to' do
    assert_called_with(
      ActionCable.server,
      :broadcast,
      [
        'action_cable:channel:broadcasting_test:chat:Room#1-Campfire',
        'Hello World'
      ]
    ) do
      ChatChannel.broadcast_to(Room.new(1), 'Hello World')
    end
  end
    
        def connect
      self.current_user = User.new 'lifo'
    end
  end
    
      test '#restart shuts down worker pool' do
    assert_called(@server.worker_pool, :halt) do
      @server.restart
    end
  end
    
    class RedisAdapterTest::Hiredis < RedisAdapterTest
  def cable_config
    super.merge(driver: 'hiredis')
  end
end
    
    Applications attributed to Apple are excluded from the output.
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
      end