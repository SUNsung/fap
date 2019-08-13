
        
              output_encoding = @output.internal_encoding || @output.external_encoding
      if @encoding != output_encoding
        if @options[:force_encoding]
          @output_encoding = output_encoding
        else
          compatible_encoding = Encoding.compatible?(@encoding, output_encoding)
          if compatible_encoding
            @output.set_encoding(compatible_encoding)
            @output.seek(0, IO::SEEK_END)
          end
        end
      end
    end
    
        def test_send_leak_symbol
      assert_no_immortal_symbol_in_method_missing('sym') do |name|
        42.send(name.to_sym)
      end
    end
    
      it 'returns true when at EOF' do
    gz = Zlib::GzipReader.new @io
    gz.eof?.should be_false
    gz.read
    gz.eof?.should be_true
  end
    
      before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
    ScratchPad.clear
  end
    
        quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not prepend anything to the stream' do
          @gz.ungetbyte nil
          @gz.read.should == '12345abcde'
        end
    
    describe 'GzipWriter#write' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new ''.b
  end
    
      before do
    @zeros    = Zlib::Deflate.deflate('0' * 100_000)
    @inflator = Zlib::Inflate.new
    @chunks   = []
    
    
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
        it 'can process' do
      mgr = Mgr.new
    
    class Component
  include Sidekiq::ExceptionHandler
    
          assert SomeScheduledWorker.perform_in(1.month, 'mike')
      assert_equal 2, ss.size