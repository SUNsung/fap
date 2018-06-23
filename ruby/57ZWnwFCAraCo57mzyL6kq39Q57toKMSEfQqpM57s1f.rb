
        
          class FeatureTopicUsers < Jobs::Base
    
      def save_and_refresh_staff_groups!
    transaction do
      self.save!
      Group.refresh_automatic_groups!(:admins, :moderators, :staff)
    end
  end
    
      def validate_type
    errors.add(:type, 'cannot be changed once an instance has been created') if type_changed? && !new_record?
    errors.add(:type, 'is not a valid type') unless self.class.valid_type?(type)
  end
    
        if params[:sort].present?
      attribute, direction = params[:sort].downcase.split('.')
      unless valid_sorts.include?(attribute)
        attribute, direction = default.to_a.first
      end
    else
      attribute, direction = default.to_a.first
    end
    
      before_action :upgrade_warning, only: :index
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
            END_OF_OUTPUT_SIGNAL = '\n\r'.freeze
    
            def validate!
          super
          help! 'A name for the Pod is required.' unless @name
          help! 'The Pod name cannot contain spaces.' if @name =~ /\s/
          help! 'The Pod name cannot contain plusses.' if @name =~ /\+/
          help! 'The Pod name cannot begin with a '.'' if @name[0, 1] == '.'
        end
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => :deny
      run DummyApp
    end
    
      it 'accepts requests with the same Accept-Language header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    expect(session).not_to be_empty
  end
    
      it 'should set the X-XSS-Protection for XHTML' do
    expect(get('/', {}, 'wants' => 'application/xhtml+xml').headers['X-XSS-Protection']).to eq('1; mode=block')
  end
    
        mock_app do
      use Rack::Head
      use(Rack::Config) { |e| e['rack.session'] ||= {}}
      use detector
      use klass
      run DummyApp
    end
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
    require 'pathname'
require './plugins/octopress_filters'
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
        def require(path)
      start = Time.now
      result = require_debug(path)
      duration = Time.now - start