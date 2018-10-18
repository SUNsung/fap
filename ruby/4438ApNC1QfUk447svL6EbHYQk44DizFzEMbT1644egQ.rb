
        
            A binary installer is available:
      https://www.haskell.org/platform/mac.html
    EOS
  when 'mysqldump-secure' then <<-EOS.undent
    The creator of mysqldump-secure tried to game our popularity metrics.
    EOS
  when 'ngrok' then <<-EOS.undent
    Upstream sunsetted 1.x in March 2016 and 2.x is not open-source.
    
        keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      def observe_file_removal(path)
    path.extend(ObserverPathnameExtension).unlink if path.exist?
  end
    
        initial_revision_var = 'HOMEBREW_UPDATE_BEFORE#{repo_var}'
    @initial_revision = ENV[initial_revision_var].to_s
    raise ReporterRevisionUnsetError, initial_revision_var if @initial_revision.empty?
    
    module Fastlane
  class FastFile
    # Stores all relevant information from the currently running process
    attr_accessor :runner
    
      before(:each) do
    # This value needs to be set or our event fixtures will not match
    allow(FastlaneCore::Helper).to receive(:ci?).and_return(false)
    allow(FastlaneCore::Helper).to receive(:operating_system).and_return('macOS')
  end
    
          def self.details
        list = <<-LIST.markdown_list
          `grouping` is just to keep your tags organised under one 'folder', defaults to 'builds'
          `lane` is the name of the current fastlane lane
          `prefix` is anything you want to stick in front of the version number, e.g. 'v'
          `postfix` is anything you want to stick at the end of the version number, e.g. '-RC1'
          `build_number` is the build number, which defaults to the value emitted by the `increment_build_number` action
        LIST
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
          })
        end').runner.execute(:test)
    
            context 'when slather version is 2.4.0' do
          let(:version) { '2.4.0' }
          it 'configuration option is not available' do
            expect(action.configuration_available?).to be_falsey
          end
        end
    
              expect(result).to eq('SCRIPT_INPUT_FILE_COUNT=3 SCRIPT_INPUT_FILE_0=AppDelegate.swift SCRIPT_INPUT_FILE_1=path/to/project/src/Model.swift SCRIPT_INPUT_FILE_2=path/to/project/test/Test.swift swiftlint lint --use-script-input-files')
        end
      end
    
          open_dry_run_modal(formatting_agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('Line 1\nLine 2\nLine 3')
      end
      click_on('Dry Run')
      expect(page).to have_text('Line 1,Line 2,Line 3')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
  end
    
        it 'understands hl=1,3-4,9' do
      stub(params).[](:hl) { '1,3-4,9' }
      expect((1..10).select { |i| highlighted?(i) }).to eq [1, 3, 4, 9]
    end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
            it 'honors updates coming from the UI' do
          scenario_import.merges = {
            '0' => {
              'name' => 'updated name',
              'schedule' => '6pm',
              'keep_events_for' => 2.days.to_i.to_s,
              'disabled' => 'false',
              'options' => weather_agent_options.merge('api_key' => 'foo').to_json
            }
          }
    
        def initialize(filters = nil)
      @filters = filters ? filters.dup : []
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
              node.remove_attribute('path')
          node.remove_attribute('region')
          node.remove_attribute('linenums')
          node.remove_attribute('title')
          node.remove_attribute('language')
          node.remove_attribute('hidecopy')
          node.remove_attribute('class')
        end
    
    require 'vagrant/capability_host'
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
            # Mounts a shared folder via NFS. This assumes that the exports
        # via the host are already done.
        def mount_nfs(ip, folders)
          raise BaseError, _key: :unsupported_nfs
        end
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
              # Make sure we're only working with one VM if single target
          if options[:single_target] && machines.length != 1
            @logger.debug('Using primary machine since single target')
            primary_name = @env.primary_machine_name
            raise Errors::MultiVMTargetRequired if !primary_name
            machines = [get_machine.call(primary_name)]
          end
    
    module Vagrant
  module Plugin
    module V2
      # This is the superclass for all V2 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
            # This is an internal initialize function that should never be
        # overridden. It is used to initialize some common internal state
        # that is used in a provider.
        def _initialize(name, machine)
          initialize_capabilities!(
            name.to_sym,
            { name.to_sym => [Class.new, nil] },
            Vagrant.plugin('2').manager.provider_capabilities,
            machine,
          )
        end
      end
    end
  end
end

    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: account_collection_url(@account, params[:id]),
      type: :ordered,
      size: @size,
      items: @statuses
    )
  end
end

    
    module Admin
  class AccountModerationNotesController < BaseController
    before_action :set_account_moderation_note, only: [:destroy]
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
        def ordered_instances
      paginated_instances.map { |account| Instance.new(account) }
    end
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end
    
    load './tasks/bower.rake'
    
        def get_file_paths(dir, recursive = true)
      get_tree(get_tree_sha(dir), recursive)['tree'].select { |f| f['type'] == 'blob' }.map { |f| f['path'] }
    end
    
          def partial(name)
        if name == :author_template
          self.class.partial('history_authors/#{@page.wiki.user_icons}')
        else
          super
        end
      end
    
    $:.unshift File.join(File.dirname(__FILE__), *%w[.. lib])
    
      s.authors  = ['Tom Preston-Werner', 'Rick Olson']
  s.email    = 'tom@github.com'
  s.homepage = 'http://github.com/gollum/gollum'
    
      class DuplicatePageError < Error
    attr_accessor :dir
    attr_accessor :existing_path
    attr_accessor :attempted_path
    
      it 'ignores implicit hashes' do
    expect_no_offenses(<<-RUBY.strip_indent)
      foo(a: 1,
      b: 2)
    RUBY
  end
    
          it 'autocorrects closing brace on different line as last element' do
        new_source = autocorrect_source(<<-RUBY.strip_indent.chomp)
          #{prefix}#{open}#{a}, # a
          #{b} # b
          #{close}
          #{suffix}
        RUBY
    
      context 'when arguments to a method' do
    let(:prefix) { 'bar(' }
    let(:suffix) { ')' }
    let(:source) { construct(false, true) }
    
          # Returns the keyword of the `if` statement as a string. Returns an empty
      # string for ternary operators.
      #
      # @return [String] the keyword of the `if` statement
      def keyword
        ternary? ? '' : loc.keyword.source
      end