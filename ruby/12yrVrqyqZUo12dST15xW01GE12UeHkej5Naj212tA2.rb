
        
          def dump_build_env(env, f = $stdout)
    keys = build_env_keys(env)
    keys -= %w[CC CXX OBJC OBJCXX] if env['CC'] == env['HOMEBREW_CC']
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
        def self.rm_DS_Store
      paths = Queue.new
      %w[Cellar Frameworks Library bin etc include lib opt sbin share var].
        map { |p| HOMEBREW_PREFIX/p }.each { |p| paths << p if p.exist? }
      workers = (0...Hardware::CPU.cores).map do
        Thread.new do
          begin
            while p = paths.pop(true)
              quiet_system 'find', p, '-name', '.DS_Store', '-delete'
            end
          rescue ThreadError # ignore empty queue error
          end
        end
      end
      workers.map(&:join)
    end
    
        initial_revision_var = 'HOMEBREW_UPDATE_BEFORE#{repo_var}'
    @initial_revision = ENV[initial_revision_var].to_s
    raise ReporterRevisionUnsetError, initial_revision_var if @initial_revision.empty?
    
      def self.path(name)
    Formulary.core_path(name)
  end
    
    # See browser for an example
class GithubGistFormula < ScriptFileFormula
  def self.url(val)
    super
    version File.basename(File.dirname(val))[0, 6]
  end
end
    
    User.seed do |u|
  u.id = -1
  u.name = 'system'
  u.username = 'system'
  u.username_lower = 'system'
  u.password = SecureRandom.hex
  u.active = true
  u.admin = true
  u.moderator = true
  u.approved = true
  u.trust_level = TrustLevel[4]
end
    
              def name
            value[:name]
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
    
        it 'returns a FontAwesome icon element' do
      icon = icon_tag('fa-copy')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('i.fa.fa-copy')).to be_a Nokogiri::XML::Element
    end
    
        it 'can not be turned off' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
  end
end

    
        it 'for the afternoon' do
      expect(@scheduler.send(:hour_to_schedule_name, 17)).to eq('5pm')
    end
  end
    
      let :reverted_extract do
    old_extract
  end
    
    module Docs
  class EntryIndex
    attr_reader :entries, :types
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def html?
      mime_type.include? 'html'
    end
    
            private
    
        def log(msg)
      puts '\r' + justify(msg)
    end
    
        def relative_path_to(url)
      url = self.class.parse(url)
      return unless origin == url.origin
    
            css('h1[class]').remove_attr('class')
        css('table[class]').remove_attr('class')
        css('table[width]').remove_attr('width')
        css('tr[style]').remove_attr('style')
    
        # See {CapabilityHost#capability}
    def capability(*args)
      super
    rescue Errors::CapabilityNotFound => e
      raise Errors::GuestCapabilityNotFound,
        cap: e.extra_data[:cap],
        guest: name
    rescue Errors::CapabilityInvalid => e
      raise Errors::GuestCapabilityInvalid,
        cap: e.extra_data[:cap],
        guest: name
    end
    
              # Default opts to a blank optionparser if none is given
          opts ||= OptionParser.new
    
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
    
      def set_account
    @account = Account.find_local!(params[:account_username])
  end
    
        def set_account
      @account = Account.find(params[:account_id])
      @user = @account.user
    end
    
      private
    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
      private
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
        if rbenv_prefix = prefix_from_bin('rbenv')
      prefixes << rbenv_prefix
    end
    
        def self.options
      [
        ['--silent', 'Show nothing'],
      ].concat(super)
    end
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end