
        
        Given(%r!^I have the following (draft|post)s? within the '(.*)' directory:$!) do |type, folder, table|
  table.hashes.each do |input_hash|
    title = slug(input_hash['title'])
    parsed_date = Time.xmlschema(input_hash['date']) rescue Time.parse(input_hash['date'])
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
    module Jekyll
  module Converters
    class Markdown
      class KramdownParser
        CODERAY_DEFAULTS = {
          'css'               => 'style',
          'bold_every'        => 10,
          'line_numbers'      => 'inline',
          'line_number_start' => 1,
          'tab_width'         => 4,
          'wrap'              => 'div',
        }.freeze
    
          action_launched('import')
    
    module Commander
  # This class override the run method with our custom stack trace handling
  # In particular we want to distinguish between user_error! and crash! (one with, one without stack trace)
  class Runner
    # Code taken from https://github.com/commander-rb/commander/blob/master/lib/commander/runner.rb#L50
    
            session.action_launched(launch_context: launch_context)
      end
    end
  end
end

    
            cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            commit: '#{commit}'
          })
        end').runner.execute(:test)
    
          it 'adds docset_package_url param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_package_url: 'http://docset-package-url.com'
          )
        end').runner.execute(:test)
    
          it 'use custom executable' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              executable: 'custom_carthage'
            )
          end').runner.execute(:test)
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
          it 'works with name and password that contain spaces or `\'`' do
        password = '\'test password\''
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            name: 'test.keychain',
            password: '#{password}',
          })
        end').runner.execute(:test)
    
            Fastlane::FastFile.new.parse('lane :test do
          import_certificate ({
            keychain_name: '#{keychain}',
            certificate_path: '#{cert_name}',
            certificate_password: '#{password}',
            log_output: true
          })
        end').runner.execute(:test)
      end
    end
  end
end

    
          it 'works with select regex' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: /AppDelegate/
            )
          end').runner.execute(:test)
    
          describe '#configuration_available?' do
        let(:param) { { use_bundle_exec: false } }
        let(:version) { '' }
        before do
          allow(action).to receive(:slather_version).and_return(Gem::Version.create(version))
        end
    
          context 'when specify reporter' do
        it 'adds reporter option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              reporter: 'json'
            )
          end').runner.execute(:test)
    
      expect(Open3).to receive(:popen2e).with(*command).and_yield(mock_input, mock_output, mock_thread)
end

    
        def retroactive_unblock?
      ActiveRecord::Type.lookup(:boolean).cast(resource_params[:retroactive])
    end
  end
end

    
    module Admin
  class ReportedStatusesController < BaseController
    before_action :set_report
    
      private
    
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
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
          def page_name
        @name.gsub('-', ' ')
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
          def title
        'Home'
      end
    
      test 'edit returns nil for non-existant page' do
    # post '/edit' fails. post '/edit/' works.
    page = 'not-real-page'
    path = '/'
    post '/edit/', :content => 'edit_msg',
         :page              => page, :path => path, :message => ''
    page_e = @wiki.paged(page, path)
    assert_equal nil, page_e
  end
    
        @wiki = Gollum::Wiki.new(@path)
    page  = @wiki.page('k')
    assert_equal '바뀐 text', utf8(page.raw_data)
    assert_equal 'ghi', page.version.message
  end
    
    if options[:irb]
  require 'irb'
  # http://jameskilton.com/2009/04/02/embedding-irb-into-your-ruby-application/
  module IRB # :nodoc:
    def self.start_session(binding)
      unless @__initialized
        args = ARGV
        ARGV.replace(ARGV.dup)
        IRB.setup(nil)
        ARGV.replace(args)
        @__initialized = true
      end
    
      s.name              = 'gollum'
  s.version           = '4.1.4'
  s.date              = '2018-10-01'
  s.rubyforge_project = 'gollum'
  s.license           = 'MIT'
    
      class Error < StandardError;
  end