
        
        module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
          private
        def listener
          @listener || @server.mutex.synchronize { @listener ||= Listener.new(self, @server.event_loop) }
        end
    
            def spec(spec, config = {})
          Resolver.new(config).spec(spec)
        end
    
    require 'abstract_unit'
    
      def test_register_and_use_json_simple
    with_test_route_set do
      with_params_parsers Mime[:json] => Proc.new { |data| ActiveSupport::JSON.decode(data)['request'].with_indifferent_access } do
        post '/',
          params: '{'request':{'summary':'content...','title':'JSON'}}',
          headers: { 'CONTENT_TYPE' => 'application/json' }
    
          debug { event.payload[:mail] }
    end
    
    class TestController < ActionController::Base
  def send_mail
    email = I18nTestMailer.mail_with_i18n_subject('test@localhost').deliver_now
    render plain: 'Mail sent - Subject: #{email.subject}'
  end
end
    
      def use_mailer
    mail_with_defaults do |format|
      format.html { render(inline: '<%= mailer.message.subject %>') }
    end
  end
    
        A binary installer is available:
      https://www.haskell.org/platform/mac.html
    EOS
  when 'mysqldump-secure' then <<-EOS.undent
    The creator of mysqldump-secure tried to game our popularity metrics.
    EOS
  when 'ngrok' then <<-EOS.undent
    Upstream sunsetted 1.x in March 2016 and 2.x is not open-source.
    
    def bottle_receipt_path(bottle_file)
  Utils.popen_read('/usr/bin/tar', '-tzf', bottle_file, '*/*/INSTALL_RECEIPT.json').chomp
end
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
      def describe_path(path)
    return 'N/A' if path.nil?
    realpath = path.realpath
    if realpath == path
      path
    else
      '#{path} => #{realpath}'
    end
  end
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
              if File.extname(file) == '.rb'
            tree[subtree] ||= []
            tree[subtree] << file
          end
        end
      end
    
    class Reporter
  class ReporterRevisionUnsetError < RuntimeError
    def initialize(var_name)
      super '#{var_name} is unset!'
    end
  end
    
      def self.all
    opoo 'Formula.all is deprecated, use Formula.map instead'
    map
  end
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
      it 'decodes positive Infinity' do
    '\x00\x00\x00\x00\x00\x00\xf0\x7f'.unpack(unpack_format).should == [infinity_value]
  end
    
      it 'decodes the number of ints requested by the count modifier' do
    'ecbahgfd'.unpack(unpack_format(2)).should == [1701012065, 1751606884]
  end
    
      it 'returns empty strings for repeated formats if the input is empty' do
    ''.unpack(unpack_format(nil, 3)).should == ['', '', '']
  end
    
      it 'handles a value of 60 for seconds by carrying values forward in zone 'UTC'' do
    with_timezone 'UTC' do
      time = Time.send(@method, 1972, 6, 30, 23, 59, 60)
    
      def userpaths?
    @settings.include? :userpaths
  end
    
        def initialize(filepath)
      @filepath = filepath
    end
    
        def cropping dst, ratio, scale
      if ratio.horizontal? || ratio.square?
        '%dx%d+%d+%d' % [ dst.width, dst.height, 0, (self.height * scale - dst.height) / 2 ]
      else
        '%dx%d+%d+%d' % [ dst.width, dst.height, (self.width * scale - dst.width) / 2, 0 ]
      end
    end
    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end
    
            def rejected_types_rejected?
          @missing_rejected_types ||= @rejected_types.select { |type| type_allowed?(type) }
          @missing_rejected_types.none?
        end
      end
    end
  end
end

    
        # You can add your own processor via the Paperclip configuration. Normally
    # Paperclip will load all processors from the
    # Rails.root/lib/paperclip_processors directory, but here you can add any
    # existing class using this mechanism.
    #
    #   Paperclip.configure do |c|
    #     c.register_processor :watermarker, WatermarkingProcessor.new
    #   end
    def register_processor(name, processor)
      @known_processors ||= {}
      @known_processors[name.to_s] = processor
    end
  end
end
