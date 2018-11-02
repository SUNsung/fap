
        
            def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
        private_constant :GA_TRACKING
    attr_accessor :session_id
    attr_accessor :client
    
          def self.example_code
        [
          'add_git_tag # simple tag with default values',
          'add_git_tag(
            grouping: 'fastlane-builds',
            prefix: 'v',
            postfix: '-RC1',
            build_number: 123
          )',
          '# Alternatively, you can specify your own tag. Note that if you do specify a tag, all other arguments are ignored.
          add_git_tag(
            tag: 'my_custom_tag'
          )'
        ]
      end
    
          it 'handles the extensions parameter with multiple elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{m,h}')
      end
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path[0].shellescape} #{path[1].shellescape}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path})
          end').runner.execute(:test)
        end
      end
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
            it 'raises an error if a short_option was used twice' do
          conflicting_options = [
            FastlaneCore::ConfigItem.new(key: :foo,
                                         short_option: '-f',
                                         description: 'foo'),
            FastlaneCore::ConfigItem.new(key: :bar,
                                         short_option: '-f',
                                         description: 'bar')
          ]
    
    gem 'rails', '~> 5.2'
gem 'omniauth', '~> 1.3'
gem 'oauth2'
gem 'omniauth-oauth2'
gem 'rdoc'
    
        # Check if a reset_password_token is provided in the request
    def assert_reset_token_passed
      if params[:reset_password_token].blank?
        set_flash_message(:alert, :no_token)
        redirect_to new_session_path(resource_name)
      end
    end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
      # A method used internally to complete the setup of warden manager after routes are loaded.
  # See lib/devise/rails/routes.rb - ActionDispatch::Routing::RouteSet#finalize_with_devise!
  def self.configure_warden! #:nodoc:
    @@warden_configured ||= begin
      warden_config.failure_app   = Devise::Delegator.new
      warden_config.default_scope = Devise.default_scope
      warden_config.intercept_401 = false
    
          # Method used by sessions controller to sign out a user. You can overwrite
      # it in your ApplicationController to provide a custom hook for a custom
      # scope. Notice that differently from +after_sign_in_path_for+ this method
      # receives a symbol with the scope, and not the resource.
      #
      # By default it is the root_path.
      def after_sign_out_path_for(resource_or_scope)
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        router_name = Devise.mappings[scope].router_name
        context = router_name ? send(router_name) : self
        context.respond_to?(:root_path) ? context.root_path : '/'
      end
    
        def warden_options
      request.respond_to?(:get_header) ? request.get_header('warden.options') : request.env['warden.options']
    end
    
        def subpath
      @subpath ||= subpath_to(current_url)
    end
    
        attr_reader :filters
    
        def add(path, content)
      @pages[path] = content
    end
    
        def path
      @path ||= url.path
    end
    
          def inherited(subclass)
        super
        subclass.base_url = base_url
        subclass.dir = dir
      end
    end
    
        def format_url(url)
      url.to_s.remove %r{\Ahttps?://}
    end
    
        def relative_path_to(url)
      url = self.class.parse(url)
      return unless origin == url.origin
    
            css('.status-badge').each do |node|
          node.name = 'code'
          node.content = node.content.strip
          node.remove_attribute('class')
        end
    
            css('h1').each_with_index do |node, i|
          next if i == 0
          node.name = 'h2'
        end
    
    class PolymorphicMentions < ActiveRecord::Migration[4.2]
  def change
    remove_index :mentions, column: %i(post_id)
    remove_index :mentions, column: %i(person_id post_id), unique: true
    rename_column :mentions, :post_id, :mentions_container_id
    add_column :mentions, :mentions_container_type, :string
    add_index :mentions,
              %i(mentions_container_id mentions_container_type),
              name:   'index_mentions_on_mc_id_and_mc_type',
              length: {mentions_container_type: 191}
    add_index :mentions,
              %i(person_id mentions_container_id mentions_container_type),
              name:   'index_mentions_on_person_and_mc_id_and_mc_type',
              length: {mentions_container_type: 191},
              unique: true
    
    When /^I (?:sign|log) in with password '([^']*)'( on the mobile website)?$/ do |password, mobile|
  @me.password = password
  automatic_login
  confirm_login mobile
end
    
      class SendPrivate < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
    require 'sass/logger'
require 'sass/util'
    
            if child.is_a?(Tree::RuleNode)
          if child.continued? && child.children.empty?
            if continued_rule
              continued_rule.add_rules child
            else
              continued_rule = child
            end
            next
          elsif continued_rule
            continued_rule.add_rules child
            continued_rule.children = child.children
            continued_rule, child = nil, continued_rule
          end
        elsif continued_rule
          continued_rule = nil
        end
    
          opts.on('--old', 'Output the old-style ':prop val' property syntax.',
                       'Only meaningful when generating Sass.') do
        @options[:for_tree][:old] = true
      end
    end