
        
            # Check if a reset_password_token is provided in the request
    def assert_reset_token_passed
      if params[:reset_password_token].blank?
        set_flash_message(:alert, :no_token)
        redirect_to new_session_path(resource_name)
      end
    end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    class DeviseCreateUsers < ActiveRecord::Migration
  def change
    create_table(:users) do |t|
      t.string :email,              null: false
      t.string :encrypted_password, null: true
      t.timestamps null: false
    end
    
      # Defines which strategy can be used to lock an account.
  # Values: :failed_attempts, :none
  mattr_accessor :lock_strategy
  @@lock_strategy = :failed_attempts
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
        # @mixin transition($transition) {
    # to:
    # @mixin transition($transition...) {
    def varargify_mixin_definitions(scss, *mixins)
      scss = scss.dup
      replaced = []
      mixins.each do |mixin|
        if scss.gsub! /(@mixin\s*#{Regexp.quote(mixin)})\((#{SCSS_MIXIN_DEF_ARGS_RE})\)/, '\1(\2...)'
          replaced << mixin
        end
      end
      log_transform *replaced unless replaced.empty?
      scss
    end
    }
    }
    
      # Set to :debug to see everything in the log.
  config.log_level = :info
    
      namespace :release do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Release #{gem} as a package'
      task gem => 'package:#{gem}' do
        sh <<-SH
          gem install #{package(gem, '.gem')} --local &&
          gem push #{package(gem, '.gem')}
        SH
      end
    end
    
          def initialize(app, options = {})
        @app, @options = app, default_options.merge(options)
      end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end