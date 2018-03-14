
        
        require 'active_support/core_ext/module/redefine_method'
require 'action_controller'
require 'action_controller/test_case'
require 'action_view'
    
    class TestResponseTest < ActiveSupport::TestCase
  def assert_response_code_range(range, predicate)
    response = ActionDispatch::TestResponse.new
    (0..599).each do |status|
      response.status = status
      assert_equal range.include?(status), response.send(predicate),
                   'ActionDispatch::TestResponse.new(#{status}).#{predicate}'
    end
  end
    
              define_singleton_method('#{name}=') do |attribute|
            instance.public_send('#{name}=', attribute)
          end
        end
      end
    
    
    {      def content_length; get_header('rack.input').length; end
    end.new('rack.input' => StringIO.new('{'title':'JSON'}}'), 'CONTENT_TYPE' => 'application/json')
    
        def execute(args)
    
        assert_raise(ArgumentError) {
      set.subset?()
    }
    
      def test_marshal_to_s
    t1 = Time.new(2011,11,8, 0,42,25, 9*3600)
    t2 = Time.at(Marshal.load(Marshal.dump(t1)))
    assert_equal('2011-11-08 00:42:25 +0900', t2.to_s,
      '[ruby-dev:44827] [Bug #5586]')
  end
    
      it 'decodes the number of characters specified by the count modifier' do
    [ ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U1', [0x80]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U2', [0x80, 0x81]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U3', [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end
    
              private
    
    # This is the base class for logstash codecs.
module LogStash::Codecs; class Base < LogStash::Plugin
  include LogStash::Config::Mixin