
        
              it 'works with select regex when regex is string' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: \'\/AppDelegate\'
            )
          end').runner.execute(:test)
    
          description = '**DEPRECATED!**'
    
    shelljoin_testcases = [
  {
    'it' => '(#1) on array with entry with space',
    'it_result' => {
      'windows' => 'wraps this entry in double quotes',
      'other'   => 'escapes the space in this entry'
    },
    'input' => ['a', 'b c', 'd'],
    'expect' => {
      'windows' => 'a 'b c' d',
      'other'   => 'a b\ c d'
    }
  },
  {
    'it' => '(#2) on array with entry with string wrapped in double quotes and space',
    'it_result' => {
      'windows' => 'wraps the entry with space in quote, and doubles the double quotes',
      'other'   => 'escapes the double quotes and escapes the space'
    },
    'input' => ['a', ''b' c', 'd'],
    'expect' => {
      'windows' => 'a '''b'' c' d',
      'other'   => 'a \'b\'\ c d'
    }
  },
  {
    'it' => '(#3) on array with entry with string wrapped in single quotes and space',
    'it_result' => {
      'windows' => 'no changes',
      'other'   => 'escapes the single quotes and space'
    },
    'input' => ['a', ''b' c', 'd'],
    'expect' => {
      'windows' => 'a \''b' c\' d',
      'other'   => 'a \\'b\\'\\ c d'
    }
  },
  # https://github.com/ruby/ruby/blob/ac543abe91d7325ace7254f635f34e71e1faaf2e/test/test_shellwords.rb#L67-L68
  {
    'it' => '(#4) on array with entry that is `$$`',
    'it_result' => {
      'windows' => 'the result includes the process id',
      'other'   => 'the result includes the process id'
    },
    'input' => ['ps', '-p', $$],
    'expect' => {
      'windows' => 'ps -p #{$$}',
      'other'   => 'ps -p #{$$}'
    }
  }
]
    
    module Cert
  class CommandsGenerator
    include Commander::Methods
    
        # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
      # Attempt to find the mapped route for devise based on request path
  def devise_mapping
    @devise_mapping ||= request.env['devise.mapping']
  end
    
                bypass_sign_in(user)
          DEPRECATION
          warden.session_serializer.store(resource, scope)
        elsif warden.user(scope) == resource && !options.delete(:force)
          # Do nothing. User already signed in and we are not forcing it.
          true
        else
          warden.set_user(resource, options.merge!(scope: scope))
        end
      end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
          # Checks whether the user session has expired based on configured time.
      def timedout?(last_access)
        !timeout_in.nil? && last_access && last_access <= timeout_in.ago
      end
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
              return [main_args, sub_command, sub_args]
        end
      end
    end
  end
end

    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
    When /^I (?:log|sign) out manually$/ do
  manual_logout
end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          it 'supports filtering by read/unread' do
        FactoryGirl.create(:notification, :recipient => alice, :target => @post)
        get :read_all
        FactoryGirl.create(:notification, :recipient => alice, :target => @post)
        get :index, params: {show: 'unread'}
        expect(assigns[:notifications].count).to eq(1)
      end
    end
    
          it 'returns an empty array for a post visible to the user' do
        sign_in(bob, scope: :user)
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body)).to eq([])
      end
    end
    
    desc 'Default: run unit tests.'
task :default => [:clean, :all]
    
    Given /^I add this snippet to config\/application.rb:$/ do |snippet|
  file_name = 'config/application.rb'
  cd('.') do
    content = File.read(file_name)
    File.open(file_name, 'w') {|f| f << content.sub(/class Application < Rails::Application.*$/, 'class Application < Rails::Application\n#{snippet}\n')}
  end
end
    
    After do
  ORIGINAL_BUNDLE_VARS.each_pair do |key, value|
    ENV[key] = value
  end
end
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
    require 'mimemagic'
require 'mimemagic/overlay'
require 'logger'
require 'terrapin'
    
        def possible_types
      MIME::Types.type_for(@filepath).collect(&:content_type)
    end
    
        def scaling dst, ratio
      if ratio.horizontal? || ratio.square?
        [ '%dx' % dst.width, ratio.width ]
      else
        [ 'x%d' % dst.height, ratio.height ]
      end
    end