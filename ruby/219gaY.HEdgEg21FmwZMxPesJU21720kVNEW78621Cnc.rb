
        
              module ClassMethods
        def tests(helper_class)
          case helper_class
          when String, Symbol
            self.helper_class = '#{helper_class.to_s.underscore}_helper'.camelize.safe_constantize
          when Module
            self.helper_class = helper_class
          end
        end
    
        # inherited only
    assert_equal 'funky.jpg', @user.highlights.first.filename.to_s
    assert_equal 'wonky.jpg', @user.highlights.second.filename.to_s
    
    module Web
  class Topic < ActiveRecord::Base
    has_many :replies, dependent: :destroy, foreign_key: 'parent_id', class_name: 'Web::Reply'
  end
end

    
    class ActionCable::Channel::PeriodicTimersTest < ActionCable::TestCase
  class ChatChannel < ActionCable::Channel::Base
    # Method name arg
    periodically :send_updates, every: 1
    
        def secret_action
    end
  end
    
    class ActionCable::Connection::AuthorizationTest < ActionCable::TestCase
  class Connection < ActionCable::Connection::Base
    attr_reader :websocket
    
      [ EOFError, Errno::ECONNRESET ].each do |closed_exception|
    test 'closes socket on #{closed_exception}' do
      run_in_eventmachine do
        connection = open_connection
    
          assert_empty @subscriptions.identifiers
    end
  end
    
    namespace :db do
  namespace :migrate do
    desc 'Setup the db or migrate depending on state of db'
    task setup: :environment do
      begin
        if ActiveRecord::Migrator.current_version.zero?
          Rake::Task['db:migrate'].invoke
          Rake::Task['db:seed'].invoke
        end
      rescue ActiveRecord::NoDatabaseError
        Rake::Task['db:setup'].invoke
      else
        Rake::Task['db:migrate'].invoke
      end
    end
  end
    
    namespace :emojis do
  desc 'Generate a unicode to filename mapping'
  task :generate do
    source = 'http://www.unicode.org/Public/emoji/5.0/emoji-test.txt'
    codes  = []
    dest   = Rails.root.join('app', 'javascript', 'mastodon', 'features', 'emoji', 'emoji_map.json')
    
          expect_updated_sign_in_at(user)
    end
    
      def start_url
    '/web/timelines/home'
  end
    
          opts.on('-?', '-h', '--help', 'Show this help message.') do
        puts opts
        exit
      end
    
        @inner.log_level = log_level
    Sass.logger = @inner
  end
    
      if defined? config.symbolize_keys!
    config.symbolize_keys!
  end
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
          def initialize(argv)
        super
        config.silent = false
      end
    
            TEMPLATE_REPO = 'https://github.com/CocoaPods/pod-template.git'.freeze
        TEMPLATE_INFO_URL = 'https://github.com/CocoaPods/pod-template'.freeze
        CREATE_NEW_POD_INFO_URL = 'http://guides.cocoapods.org/making/making-a-cocoapod'.freeze