
        
          it 'adds nil for each element requested beyond the end of the String' do
    [ ['',          [nil, nil, nil]],
      ['dcbae',     [1684234849, nil, nil]],
      ['dcbaefg',   [1684234849, nil, nil]],
      ['dcbahgfe',  [1684234849, 1751606885, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
        def metadata_subdir(leaf, version: self.version, timestamp: :latest, create: false)
      if create && timestamp == :latest
        raise CaskError, 'Cannot create metadata subdir when timestamp is :latest.'
      end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
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
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => :deny
      run DummyApp
    end
    
      it 'should not leak changes to env' do
    klass    = described_class
    detector = Struct.new(:app) do
      def call(env)
        was = env.dup
        res = app.call(env)
        was.each do |k,v|
          next if env[k] == v
          fail 'env[#{k.inspect}] changed from #{v.inspect} to #{env[k].inspect}'
        end
        res
      end
    end
    
        def blank_name?
      @filepath.nil? || @filepath.empty?
    end
    
        def cropping dst, ratio, scale
      if ratio.horizontal? || ratio.square?
        '%dx%d+%d+%d' % [ dst.width, dst.height, 0, (self.height * scale - dst.height) / 2 ]
      else
        '%dx%d+%d+%d' % [ dst.width, dst.height, (self.width * scale - dst.width) / 2, 0 ]
      end
    end
    
          class ValidateAttachmentContentTypeMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
          @allowed_types = []
          @rejected_types = []
        end
    
        def load_processor(name)
      if defined?(Rails.root) && Rails.root
        filename = '#{name.to_s.underscore}.rb'
        directories = %w(lib/paperclip lib/paperclip_processors)
    
        module Statements
      def add_attachment(table_name, *attachment_names)
        raise ArgumentError, 'Please specify attachment name in your add_attachment call in your migration.' if attachment_names.empty?