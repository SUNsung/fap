
        
                  # Bubbled up from the adapter require. Prefix the exception message
          # with some guidance about how to address it and reraise.
          else
            raise e.class, 'Error loading the '#{adapter}' Action Cable pubsub adapter. Missing a gem it depends on? #{e.message}', e.backtrace
          end
        end
    
            def test_encoded_password
          password = 'am@z1ng_p@ssw0rd#!'
          encoded_password = URI.encode_www_form_component(password)
          spec = resolve 'abstract://foo:#{encoded_password}@localhost/bar'
          assert_equal password, spec['password']
        end
    
        def index
      render plain: 'Hello Secret'
    end
    
        def processing
      self.content_type = 'text/html'
      head 102
    end
    
    module ActionMailer
  # Implements the ActiveSupport::LogSubscriber for logging notifications when
  # email is delivered or received.
  class LogSubscriber < ActiveSupport::LogSubscriber
    # An email was delivered.
    def deliver(event)
      info do
        recipients = Array(event.payload[:to]).join(', ')
        'Sent mail to #{recipients} (#{event.duration.round(1)}ms)'
      end
    
        included do
      attr_accessor :params
    end
    
    # Emulate AV railtie
require 'action_view'
ActionMailer::Base.include(ActionView::Layouts)
    
      test 'delivery method can be customized per instance' do
    stub_any_instance(Mail::SMTP, instance: Mail::SMTP.new({})) do |instance|
      assert_called(instance, :deliver!) do
        email = DeliveryMailer.welcome.deliver_now
        assert_instance_of Mail::SMTP, email.delivery_method
        email = DeliveryMailer.welcome(delivery_method: :test).deliver_now
        assert_instance_of Mail::TestMailer, email.delivery_method
      end
    end
  end
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
        return if Language::Python.reads_brewed_pth_files?('python')
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
            if file_is_stale || ARGV.switch?('s') && !f.installed? || bottle_file_outdated?(f, file)
          cleanup_path(file) { file.unlink }
        end
      end
    end
    
      def hardware
    'CPU: #{Hardware.cores_as_words}-core #{Hardware::CPU.bits}-bit #{Hardware::CPU.family}'
  end
    
      if defined? config.symbolize_keys!
    config.symbolize_keys!
  end
    
          res << val.to_s(:quote => :none)
      res << ' ' if @after && @whitespace_after
      res << @after.perform(environment).to_s if @after
      str = Sass::Script::Value::String.new(
        res, :identifier,
        (to_quoted_equivalent.to_sass if deprecation == :potential))
      str.source_range = source_range
      opts(str)
    end
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
          class << self
        alias escape_url escape
        public :escape_html
      end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
      context 'escaping' do
    it 'escapes html entities' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => '<bar>'
      expect(body).to eq('&lt;bar&gt;')
    end
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => :deny
      run DummyApp
    end
    
      it 'should set the X-XSS-Protection for XHTML' do
    expect(get('/', {}, 'wants' => 'application/xhtml+xml').headers['X-XSS-Protection']).to eq('1; mode=block')
  end
    
      # Run specs in random order to surface order dependencies. If you find an
  # order dependency and want to debug it, you can fix the order by providing
  # the seed, which is printed after each run.
  #     --seed 1234
  config.order = :random
    
    
===============================================
 Error for category_generator.rb plugin
-----------------------------------------------
 No 'category_index.html' in source/_layouts/
 Perhaps you haven't installed a theme yet.
===============================================
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def show
          respond_with(stock_location)
        end