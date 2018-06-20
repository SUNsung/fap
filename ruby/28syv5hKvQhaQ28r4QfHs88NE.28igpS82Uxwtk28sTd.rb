
        
          test 'overriding has_many_attached methods works' do
    # attach blobs before messing with getter, which breaks `#attach`
    @user.highlights.attach create_blob(filename: 'funky.jpg'), create_blob(filename: 'wonky.jpg')
    
          # remove the column +name+ from the table.
      #   remove_column(:account_id)
      def remove_column(name)
        @columns_hash.delete name.to_s
      end
    
            def test_create_table_with_array_column
          connection.create_table :testings do |t|
            t.string :foo, array: true
          end
    
    require 'test_helper'
require 'minitest/mock'
require 'stubs/test_connection'
require 'stubs/room'
    
        thread = server.run
    
          connection = Connection.new(server, env)
      assert_called(connection.websocket, :close) do
        connection.process
      end
    end
  end
end

    
        def send_async(method, *args)
      send method, *args
    end
    
        version '4' do
      self.release = '4.1.1'
      self.base_url = 'https://getbootstrap.com/docs/4.1/'
      self.root_path = 'getting-started/introduction/'
    
          html_filters.push 'd3/clean_html', 'd3/entries_v3', 'title'
    
        def root?
      path == 'index'
    end