
        
          describe 'migrating an actual agent' do
    before do
      valid_params = {
                        'auth_token' => 'token',
                        'room_name' => 'test',
                        'room_name_path' => '',
                        'username' => 'Huginn',
                        'username_path' => '$.username',
                        'message' => 'Hello from Huginn!',
                        'message_path' => '$.message',
                        'notify' => false,
                        'notify_path' => '',
                        'color' => 'yellow',
                        'color_path' => '',
                      }
    
      let :valid_options do
    {
      'name' => 'XKCD',
      'expected_update_period_in_days' => '2',
      'type' => 'html',
      'url' => '{{ url | default: 'http://xkcd.com/' }}',
      'mode' => 'on_change',
      'extract' => old_extract,
      'template' => old_template
    }
  end
    
          @log.level = 0
      expect(@log).to be_valid
    end
  end
    
        stub_request(:get, /trackings/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/aftership.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    
        it 'should raise error when response has an error' do
      stub(HTTParty).post { {'error' => {'message' => 'Sample error'}} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Sample error/)
    end
  end
end

    
    def r; return; end; *a = r(); test_ok(a == [nil])
def r; return nil; end; *a = r(); test_ok(a == [nil])
def r; return 1; end; *a = r(); test_ok(a == [1])
def r; return []; end; *a = r(); test_ok(a == [])
def r; return [1]; end; *a = r(); test_ok(a == [1])
def r; return [nil]; end; *a = r(); test_ok(a == [nil])
def r; return [[]]; end; *a = r(); test_ok(a == [[]])
def r; return [1,2]; end; *a = r(); test_ok(a == [1,2])
def r; return [*[]]; end; *a = r(); test_ok(a == [])
def r; return [*[1]]; end; *a = r(); test_ok(a == [1])
def r; return [*[1,2]]; end; *a = r(); test_ok(a == [1,2])
    
      def vcross(b)
    Vec.new(@y * b.z - @z * b.y,
            @z * b.x - @x * b.z,
            @x * b.y - @y * b.x)
  end
    
    FIRST     = -> l { LEFT[RIGHT[l]] }
IF        = -> b { b }
LEFT      = -> p { p[-> x { -> y { x } } ] }
RIGHT     = -> p { p[-> x { -> y { y } } ] }
IS_EMPTY  = LEFT
REST      = -> l { RIGHT[RIGHT[l]] }
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils