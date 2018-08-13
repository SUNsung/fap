
        
          def test_escape_javascript_with_safebuffer
    given = %('quoted' 'double-quoted' new-line:\n </closed>)
    expect = %(\\'quoted\\' \\'double-quoted\\' new-line:\\n <\\/closed>)
    assert_equal expect, escape_javascript(given)
    assert_equal expect, escape_javascript(ActiveSupport::SafeBuffer.new(given))
    assert_instance_of String, escape_javascript(given)
    assert_instance_of ActiveSupport::SafeBuffer, escape_javascript(ActiveSupport::SafeBuffer.new(given))
  end
    
    module ActionCable
  module SubscriptionAdapter
    class Redis < Base # :nodoc:
      prepend ChannelPrefix
    
            attributes.flat_map do |key, value|
          if value.is_a?(Hash) && !table.has_column?(key)
            associated_predicate_builder(key).expand_from_hash(value)
          elsif table.associated_with?(key)
            # Find the foreign key when using queries such as:
            # Post.where(author: author)
            #
            # For polymorphic relationships, find the foreign key and type:
            # PriceEstimate.where(estimate_of: treasure)
            associated_table = table.associated_table(key)
            if associated_table.polymorphic_association?
              case value.is_a?(Array) ? value.first : value
              when Base, Relation
                value = [value] unless value.is_a?(Array)
                klass = PolymorphicArrayValue
              end
            end
    
          attr_reader :subtype, :coder
    
      def test_serialized_json_attribute_returns_unserialized_value
    Topic.serialize :content, JSON
    my_post = posts(:welcome)
    
    
    {        def should_be_cool
          unless first_name == 'cool'
            errors.add :first_name, 'not cool'
          end
        end
    }
    reference = Class.new(ActiveRecord::Base) {
      self.table_name = 'references'
      def self.name; 'Reference'; end
      belongs_to :person, autosave: true, anonymous_class: person
    }
    
        def secret_action
    end
  end
    
          subscriptions = app.connections.first.subscriptions.send(:subscriptions)
      assert_not_equal 0, subscriptions.size, 'Missing EchoChannel subscription'
      channel = subscriptions.first[1]
      assert_called(channel, :unsubscribed) do
        c.close
        sleep 0.1 # Data takes a moment to process
      end
    
      class FakeConnection
    def close
    end
  end
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
          def hour
        @obj.date.strftime('%H')
      end
    
        projects << @user.contributed_projects.visible_to_user(current_user) if current_user
    projects << @user.contributed_projects.public_to_user(current_user)
    
      # Before we load the schema, define the timestamp_id function.
  # Idiomatically, we might do this in a migration, but then it
  # wouldn't end up in schema.rb, so we'd need to figure out a way to
  # get it in before doing db:setup as well. This is simpler, and
  # ensures it's always in place.
  Rake::Task['db:schema:load'].enhance ['db:define_timestamp_id']
    
      attributes :id, :type, :url, :preview_url,
             :remote_url, :text_url, :meta,
             :description
    
        map = map.sort { |a, b| a[0].size <=> b[0].size }.to_h
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/follow_request
  def follow_request
    f = Follow.last
    NotificationMailer.follow_request(f.target_account, Notification.find_by(activity: f))
  end
    
      def _log(level, message)
    @messages << [level, message]
  end
end

    
      module Sass::Plugin::Configuration
    # Different default options in a m environment.
    def default_options
      @default_options ||= begin
        version = Merb::VERSION.split('.').map {|n| n.to_i}
        if version[0] <= 0 && version[1] < 5
          root = MERB_ROOT
          env  = MERB_ENV
        else
          root = Merb.root.to_s
          env  = Merb.environment
        end
    
        # Starts the read-eval-print loop.
    def run
      environment = Environment.new
      @line = 0
      loop do
        @line += 1
        unless (text = Readline.readline('>> '))
          puts
          return
        end
    
    require 'cocoapods'
    
          def report
        <<-EOS
    
            TEMPLATE_REPO = 'https://github.com/CocoaPods/pod-template.git'.freeze
        TEMPLATE_INFO_URL = 'https://github.com/CocoaPods/pod-template'.freeze
        CREATE_NEW_POD_INFO_URL = 'http://guides.cocoapods.org/making/making-a-cocoapod'.freeze
    
          def initialize(argv)
        @update = argv.flag?('update')
        @stats  = argv.flag?('stats')
        super
      end
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
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
    
        { # yes, this is ugly, feel free to change that
      '/..' => '/', '/a/../b' => '/b', '/a/../b/' => '/b/', '/a/.' => '/a/',
      '/%2e.' => '/', '/a/%2E%2e/b' => '/b', '/a%2f%2E%2e%2Fb/' => '/b/',
      '//' => '/', '/%2fetc%2Fpasswd' => '/etc/passwd'
    }.each do |a, b|
      it('replaces #{a.inspect} with #{b.inspect}') { expect(get(a).body).to eq(b) }
    end
    
      it 'should set the X-XSS-Protection for XHTML' do
    expect(get('/', {}, 'wants' => 'application/xhtml+xml').headers['X-XSS-Protection']).to eq('1; mode=block')
  end
    
    module LogStash::Api::AppHelpers
  # This method handle both of the normal flow *happy path*
  # and the display or errors, if more custom logic is added here
  # it will make sense to separate them.
  #
  # See `#error` method in the `LogStash::Api::Module::Base`
  def respond_with(data, options={})
    as     = options.fetch(:as, :json)
    filter = options.fetch(:filter, '')
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
        def _1
      elements[1]
    end
    
        outpath = file.gsub('.gz', '')
    tgz = Zlib::GzipReader.new(File.open(file))
    begin
      File.open(outpath, 'w') do |out|
        IO::copy_stream(tgz, out)
      end
      File.unlink(file)
    rescue
      File.unlink(outpath) if File.file?(outpath)
     raise
    end
    tgz.close
  end