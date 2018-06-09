
        
          def test_escape_javascript_with_safebuffer
    given = %('quoted' 'double-quoted' new-line:\n </closed>)
    expect = %(\\'quoted\\' \\'double-quoted\\' new-line:\\n <\\/closed>)
    assert_equal expect, escape_javascript(given)
    assert_equal expect, escape_javascript(ActiveSupport::SafeBuffer.new(given))
    assert_instance_of String, escape_javascript(given)
    assert_instance_of ActiveSupport::SafeBuffer, escape_javascript(ActiveSupport::SafeBuffer.new(given))
  end
    
            def test_url_host_no_db
          spec = resolve 'abstract://foo?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
      def test_helper_attr
    assert_nothing_raised { @controller_class.helper_attr :delegate_attr }
    assert_includes master_helper_methods, :delegate_attr
    assert_includes master_helper_methods, :delegate_attr=
  end
    
        def index
      self.response_body = 'Hello World'
    end
  end
    
        def dump_params_keys(hash = params)
      hash.keys.sort.inject('') do |s, k|
        value = hash[k]
    
    class AssertSelectEmailTest < ActionMailer::TestCase
  class AssertSelectMailer < ActionMailer::Base
    def test(html)
      mail body: html, content_type: 'text/html',
        subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>'
    end
  end
    
      def test_receive_is_notified
    fixture = File.read(File.expand_path('fixtures/raw_email', __dir__))
    TestMailer.receive(fixture)
    wait
    assert_equal(1, @logger.logged(:info).size)
    assert_match(/Received mail/, @logger.logged(:info).first)
    assert_equal(1, @logger.logged(:debug).size)
    assert_match(/Jamis/, @logger.logged(:debug).first)
  end
end

    
        version '1' do
      self.release = '1.12.6'
      self.base_url = 'http://coffeescript.org/v1/'
    
        version '1.3' do
      self.release = '1.3.4'
      self.base_urls = [
        'https://hexdocs.pm/elixir/#{release}/',
        'https://hexdocs.pm/eex/#{release}/',
        'https://hexdocs.pm/ex_unit/#{release}/',
        'https://hexdocs.pm/iex/#{release}/',
        'https://hexdocs.pm/logger/#{release}/',
        'https://hexdocs.pm/mix/#{release}/',
        'https://elixir-lang.org/getting-started/'
      ]
    end
  end
end

    
        version 'Lua' do
      self.base_url = 'https://api.haxe.org/lua/'
    end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
          if dest.end_with? '/'
        dest_dir.relative_path_from(base_dir).to_s.tap do |result|
          result << '/' if result != '.'
        end
      else
        dest_dir.parent.relative_path_from(base_dir).join(dest.split('/').last).to_s
      end
    end
    
    		self.block[-1] << ';'
		self.block[-1] << ''
	end