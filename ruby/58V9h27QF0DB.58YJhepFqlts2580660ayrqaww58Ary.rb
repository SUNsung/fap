
        
              def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :tag,
                                       env_name: 'FL_GIT_TAG_TAG',
                                       description: 'Define your own tag text. This will replace all other parameters',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :grouping,
                                       env_name: 'FL_GIT_TAG_GROUPING',
                                       description: 'Is used to keep your tags organised under one 'folder'',
                                       default_value: 'builds'),
          FastlaneCore::ConfigItem.new(key: :prefix,
                                       env_name: 'FL_GIT_TAG_PREFIX',
                                       description: 'Anything you want to put in front of the version number (e.g. 'v')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :postfix,
                                       env_name: 'FL_GIT_TAG_POSTFIX',
                                       description: 'Anything you want to put at the end of the version number (e.g. '-RC1')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :build_number,
                                       env_name: 'FL_GIT_TAG_BUILD_NUMBER',
                                       description: 'The build number. Defaults to the result of increment_build_number if you\'re using it',
                                       default_value: Actions.lane_context[Actions::SharedValues::BUILD_NUMBER],
                                       default_value_dynamic: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :message,
                                       env_name: 'FL_GIT_TAG_MESSAGE',
                                       description: 'The tag message. Defaults to the tag's name',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :commit,
                                       env_name: 'FL_GIT_TAG_COMMIT',
                                       description: 'The commit or object where the tag will be set. Defaults to the current HEAD',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :force,
                                       env_name: 'FL_GIT_TAG_FORCE',
                                       description: 'Force adding the tag',
                                       optional: true,
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :sign,
                                       env_name: 'FL_GIT_TAG_SIGN',
                                       description: 'Make a GPG-signed tag, using the default e-mail address's key',
                                       optional: true,
                                       is_string: false,
                                       default_value: false)
        ]
      end
    
          it 'adds install_docset param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            install_docset: true
          )
        end').runner.execute(:test)
    
          it 'doesn't add a no-use-binaries flag to command if use_binaries is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              use_binaries: true
            )
          end').runner.execute(:test)
    
          it 'Does not include merge commits in the list of commits' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(include_merges: false)
        end').runner.execute(:test)
    
    # To avoid 'PR & Runs' for which tests don't pass, we want to make spec errors more visible
# The code below will run on Circle, parses the results in JSON and posts them to the PR as comment
containing_dir = ENV['CIRCLE_TEST_REPORTS'] || '.' # for local testing
file_path = File.join(containing_dir, 'rspec', 'fastlane-junit-results.xml')
    
    HighLine.track_eof = false
    
        self.itime  = ::Time.now
    self.queue  = ::Queue.new
    
      #
  # Move these into an IPMI stack or mixin at some point
  #
    
            # Creates a TCP connection using Rex::Socket::Tcp
        #
        # @return [Rex::Socket::Tcp]
        def create_tcp_connection
          self.connection = Rex::Socket::Tcp.create(
            'PeerHost'   => host,
            'PeerPort'   => port.to_i,
            'Context'    => context,
            'Timeout'    => timeout
          )
        end
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
              # Encodes the checksum field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_checksum
            OpenSSL::ASN1::OctetString.new(checksum)
          end
        end
      end
    end
  end
end
    
    # for each blog URL, check if rss URL exists
matches.each do |match|
  name = match[0]
  web_url = match[1]
    
      # Configure an appender that will write log events to STDOUT. A colorized
  # pattern layout is used to format the log events into strings before
  # writing.
  Logging.appenders.stdout('stdout',
                           auto_flushing: true,
                           layout:        Logging.layouts.pattern(
                             pattern:      pattern,
                             color_scheme: 'bright'
                           )
                          ) if config.log_to.include? 'stdout'
    
    class FixPhotosShareVisibilities < ActiveRecord::Migration[4.2]
  class Photo < ApplicationRecord
  end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
        before do
      allow_any_instance_of(Spree::Api::V2::Storefront::CartController).to receive(:spree_current_order).and_return(order)
      patch '/api/v2/storefront/cart/empty', headers: headers_bearer
    end
    
        context 'with specified pagination params' do
      let!(:order) { create(:order, state: 'complete', user: user, completed_at: Time.current) }
      let!(:order_1) { create(:order, state: 'complete', user: user, completed_at: Time.current + 1.day) }
      let!(:order_2) { create(:order, state: 'complete', user: user, completed_at: Time.current + 2.days) }
      let!(:order_3) { create(:order, state: 'complete', user: user, completed_at: Time.current + 3.days) }
    
        it 'return JSON API payload of User and associations (default billing and shipping address)' do
      expect(json_response['data']).to have_id(user.id.to_s)
      expect(json_response['data']).to have_type('user')
      expect(json_response['data']).to have_relationships(:default_shipping_address, :default_billing_address)
    
          it 'returns taxon by permalink' do
        expect(json_response['data']).to have_id(Spree::Taxon.first.id.to_s)
        expect(json_response['data']).to have_attribute(:name).with_value(Spree::Taxon.first.name)
      end
    end
  end
end

    
      config.include JSONAPI::RSpec
  config.include FactoryBot::Syntax::Methods
  config.include Spree::Api::TestingSupport::Helpers, type: :controller
  config.include Spree::Api::TestingSupport::Helpers, type: :request
  config.extend Spree::Api::TestingSupport::Setup, type: :controller
  config.include Spree::TestingSupport::Preferences, type: :controller
  config.include Spree::TestingSupport::ImageHelpers
    
          def product_scope
        if @current_user_roles.include?('admin')
          scope = Product.with_deleted.accessible_by(current_ability, :read).includes(*product_includes)
    
    desc 'Move source to source.old, install source theme updates, replace source/_includes/navigation.html with source.old's navigation'
task :update_source, :theme do |t, args|
  theme = args.theme || 'classic'
  if File.directory?('#{source_dir}.old')
    puts '## Removed existing #{source_dir}.old directory'
    rm_r '#{source_dir}.old', :secure=>true
  end
  mkdir '#{source_dir}.old'
  cp_r '#{source_dir}/.', '#{source_dir}.old'
  puts '## Copied #{source_dir} into #{source_dir}.old/'
  cp_r '#{themes_dir}/'+theme+'/source/.', source_dir, :remove_destination=>true
  cp_r '#{source_dir}.old/_includes/custom/.', '#{source_dir}/_includes/custom/', :remove_destination=>true
  cp '#{source_dir}.old/favicon.png', source_dir
  mv '#{source_dir}/index.html', '#{blog_index_dir}', :force=>true if blog_index_dir != source_dir
  cp '#{source_dir}.old/index.html', source_dir if blog_index_dir != source_dir && File.exists?('#{source_dir}.old/index.html')
  puts '## Updated #{source_dir} ##'
end
    
      class ImageTag < Liquid::Tag
    @img = nil
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end