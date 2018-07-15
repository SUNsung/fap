
        
          def test_escape_javascript_with_safebuffer
    given = %('quoted' 'double-quoted' new-line:\n </closed>)
    expect = %(\\'quoted\\' \\'double-quoted\\' new-line:\\n <\\/closed>)
    assert_equal expect, escape_javascript(given)
    assert_equal expect, escape_javascript(ActiveSupport::SafeBuffer.new(given))
    assert_instance_of String, escape_javascript(given)
    assert_instance_of ActiveSupport::SafeBuffer, escape_javascript(ActiveSupport::SafeBuffer.new(given))
  end
    
            if routes &&
           (routes.named_routes.route_defined?(selector) ||
             routes.mounted_helpers.method_defined?(selector))
          @controller.__send__(selector, *args)
        else
          super
        end
      end
    
            def test_url_from_environment
          spec = resolve :production, 'production' => 'abstract://foo?encoding=utf8'
          assert_equal({
            'adapter'  =>  'abstract',
            'host'     =>  'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
        # Represents the schema of an SQL table in an abstract way. This class
    # provides methods for manipulating the schema representation.
    #
    # Inside migration files, the +t+ object in {create_table}[rdoc-ref:SchemaStatements#create_table]
    # is actually of this type:
    #
    #   class SomeMigration < ActiveRecord::Migration[5.0]
    #     def up
    #       create_table :foo do |t|
    #         puts t.class  # => 'ActiveRecord::ConnectionAdapters::TableDefinition'
    #       end
    #     end
    #
    #     def down
    #       ...
    #     end
    #   end
    #
    class TableDefinition
      include ColumnMethods
    
            default = columns.detect { |c| c.name == 'default_int' }
        one     = columns.detect { |c| c.name == 'one_int'     }
        four    = columns.detect { |c| c.name == 'four_int'    }
        eight   = columns.detect { |c| c.name == 'eight_int'   }
    
    gem 'pg', '>= 0.18', '< 2.0'
require 'pg'
require 'thread'
require 'digest/sha1'
    
        def wait_for_close
      @closed.wait(WAIT_WHEN_EXPECTING_EVENT)
    end
    
    require 'test_helper'
require 'stubs/test_server'
    
      test 'making a connection with invalid headers' do
    run_in_eventmachine do
      connection = ActionCable::Connection::Base.new(@server, Rack::MockRequest.env_for('/test'))
      response = connection.process
      assert_equal 404, response[0]
    end
  end
    
    class BaseTest < ActionCable::TestCase
  def setup
    @server = ActionCable::Server::Base.new
    @server.config.cable = { adapter: 'async' }.with_indifferent_access
  end
    
      def working?
    last_receive_at && last_receive_at > options['expected_receive_period_in_days'].to_i.days.ago && !recent_error_logs?
  end
    
      def validate_option(method)
    if self.respond_to? 'validate_#{method}'.to_sym
      self.send('validate_#{method}'.to_sym)
    else
      false
    end
  end
    
          options[:only_patterns] = [/\Ad3[\-\w]+\z/, /\Ad3\/blob\/master\/changes\.md\z/i]
      options[:skip_patterns] = [/3\.x-api-reference/]
    
        version 'HashLink' do
      self.base_url = 'https://api.haxe.org/hl/'
    end
    
        self.links = {
      home: 'https://secure.php.net/',
      code: 'https://git.php.net/?p=php-src.git;a=summary'
    }
    
        def insert_after(index, *names)
      insert assert_index(index) + 1, *names
    end
    
        def subpath_to(url, options = nil)
      url = self.class.parse(url)
      return unless origin == url.origin
    
      delegate [:empty?, :to_s] => :caveats
    
        report_disk_usage unless Cleanup.disk_cleanup_size.zero?
    report_unremovable_kegs unless Cleanup.unremovable_kegs.empty?
  end