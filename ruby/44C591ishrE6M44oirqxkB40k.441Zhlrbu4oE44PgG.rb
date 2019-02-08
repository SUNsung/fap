
        
                # Reset topic count because we don't count the description topic
        DB.exec 'UPDATE categories SET topic_count = 0 WHERE id = #{lounge.id}'
      end
    end
  end
end

    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          # Set up a subject doing an I18n lookup. At first, it attempts to set a subject
      # based on the current mapping:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           user_subject: '...'
      #
      # If one does not exist, it fallbacks to ActionMailer default:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           subject: '...'
      #
      def subject_for(key)
        I18n.t(:'#{devise_mapping.name}_subject', scope: [:devise, :mailer, key],
          default: [:subject, key.to_s.humanize])
      end
    end
  end
end

    
        def default_used_route(options)
      singularizer = lambda { |s| s.to_s.singularize.to_sym }
    
          # A callback initiated after successfully being remembered. This can be
      # used to insert your own logic that is only run after the user is
      # remembered.
      #
      # Example:
      #
      #   def after_remembered
      #     self.update_attribute(:invite_code, nil)
      #   end
      #
      def after_remembered
      end
    
    module Vagrant
  module Plugin
    module V1
      # This is the superclass for all V1 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
            # This contains all the hosts and their parents.
        #
        # @return [Registry<Symbol, Array<Class, Symbol>>]
        attr_reader :hosts
    
            # This returns any automatically detected errors.
        #
        # @return [Array<String>]
        def _detected_errors
          return [] if !@__invalid_methods || @__invalid_methods.empty?
          return [I18n.t('vagrant.config.common.bad_field',
                         fields: @__invalid_methods.to_a.sort.join(', '))]
        end
    
            # This returns all the config classes for the various providers.
        #
        # @return [Hash]
        def provider_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provider])
            end
          end
        end
    
            # Sets a human-friendly description of the plugin.
        #
        # @param [String] value Description of the plugin.
        # @return [String] Description of the plugin.
        def self.description(value=UNSET_VALUE)
          get_or_set(:description, value)
        end
    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a provider for the V2 API. A provider
      # is responsible for creating compute resources to match the needs
      # of a Vagrant-configured system.
      class Provider
        include CapabilityHost
    
      def unpin
    path.unlink if pinned?
    HOMEBREW_PINNED_KEGS.rmdir_if_possible
  end
    
    describe HomebrewArgvExtension do
  subject { argv.extend(described_class) }
    
        failure_message do |(file, stderr)|
      'expected that #{file} is a valid Bash file:\n#{stderr}'
    end
  end
    
        ShareVisibility.joins('INNER JOIN photos ON photos.id = share_visibilities.shareable_id')
                   .where(shareable_type: 'Photo', photos: {public: true}).delete_all
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
        it 'succeeds for notification dropdown' do
      Timecop.travel(6.seconds.ago) do
        @notification.touch
      end
      get :index, format: :json
      expect(response).to be_success
      response_json = JSON.parse(response.body)
      note_html = Nokogiri::HTML(response_json['notification_list'][0]['also_commented']['note_html'])
      timeago_content = note_html.css('time')[0]['data-time-ago']
      expect(response_json['unread_count']).to be(1)
      expect(response_json['unread_count_by_type']).to eq(
        'also_commented'       => 1,
        'comment_on_post'      => 0,
        'contacts_birthday'    => 0,
        'liked'                => 0,
        'mentioned'            => 0,
        'mentioned_in_comment' => 0,
        'reshared'             => 0,
        'started_sharing'      => 0
      )
      expect(timeago_content).to include(@notification.updated_at.iso8601)
      expect(response.body).to match(/note_html/)
    end
    
      desc 'Run sass-spec tests against the local code.'
  task :spec do
    require 'yaml'
    sass_spec_options = YAML.load_file(scope('test/sass-spec.yml'))
    enabled = sass_spec_options.delete(:enabled)
    unless enabled
      puts 'SassSpec tests are disabled.'
      next
    end
    if ruby_version_at_least?('1.9.2')
      old_load_path = $:.dup
      begin
        $:.unshift(File.join(File.dirname(__FILE__), 'lib'))
        begin
          require 'sass_spec'
        rescue LoadError
          puts 'You probably forgot to run: bundle exec rake'
          raise
        end
        default_options = {
          :spec_directory => SassSpec::SPEC_DIR,
          :engine_adapter => SassEngineAdapter.new,
          :generate => false,
          :tap => false,
          :skip => false,
          :verbose => false,
          :filter => '',
          :limit => -1,
          :unexpected_pass => false,
          :nuke => false,
        }
        SassSpec::Runner.new(default_options.merge(sass_spec_options)).run || exit(1)
      ensure
        $:.replace(old_load_path)
      end
    else
      'Skipping sass-spec on ruby versions less than 1.9.2'
    end
  end
end
    
        # Prints a status message about performing the given action,
    # colored using the given color (via terminal escapes) if possible.
    #
    # @param name [#to_s] A short name for the action being performed.
    #   Shouldn't be longer than 11 characters.
    # @param color [Symbol] The name of the color to use for this action.
    #   Can be `:red`, `:green`, or `:yellow`.
    def puts_action(name, color, arg)
      return if @options[:for_engine][:quiet]
      printf color(color, '%11s %s\n'), name, arg
      STDOUT.flush
    end
    
          raise <<MSG if @args.empty?
What files should I watch? Did you mean something like:
    #{@default_syntax} --watch input.#{@default_syntax}:output.css
    #{@default_syntax} --watch input-dir:output-dir
MSG
    
    group :development do
  cp_gem 'claide',                'CLAide'
  cp_gem 'cocoapods-core',        'Core'
  cp_gem 'cocoapods-deintegrate', 'cocoapods-deintegrate'
  cp_gem 'cocoapods-downloader',  'cocoapods-downloader'
  cp_gem 'cocoapods-plugins',     'cocoapods-plugins'
  cp_gem 'cocoapods-search',      'cocoapods-search'
  cp_gem 'cocoapods-stats',       'cocoapods-stats'
  cp_gem 'cocoapods-trunk',       'cocoapods-trunk'
  cp_gem 'cocoapods-try',         'cocoapods-try'
  cp_gem 'molinillo',             'Molinillo'
  cp_gem 'nanaimo',               'Nanaimo'
  cp_gem 'xcodeproj',             'Xcodeproj'
    
        # From asking people, it seems MacPorts does not have a `prefix` command, like
    # Homebrew does, so make an educated guess:
    if port_prefix = prefix_from_bin('port')
      prefixes << port_prefix
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
    
      it 'denies post form requests with wrong authenticity_token field' do
    post('/', {'authenticity_token' => bad_token}, 'rack.session' => session)
    expect(last_response).not_to be_ok
  end
    
          * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      * Redistributions in binary form must reproduce the above
        copyright notice, this list of conditions and the following
        disclaimer in the documentation and/or other materials provided
        with the distribution.
      * Neither the name of Google Inc. nor the names of its
        contributors may be used to endorse or promote products derived
        from this software without specific prior written permission.
    
          attr_reader :name, :path
    
      def app
    Precious::App
  end
end
    
      test 'edit redirects to create on non-existant page' do
    name = 'E'
    get '/edit/#{name}'
    follow_redirect!
    assert_equal '/create/#{name}', last_request.fullpath
    assert last_response.ok?
  end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
        post '/edit/PG', :page => 'PG', :content => '바뀐 text', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?
    
      # replace name version and date
  replace_header(head, :name)
  replace_header(head, :version)
  replace_header(head, :date)
  #comment this out if your rubyforge_project has a different name
  replace_header(head, :rubyforge_project)
    
    # Set some attributes
package.name = 'my-service'
package.version = '1.0'
    
      # Add a new source to this package.
  # The exact behavior depends on the kind of package being managed.
  #
  # For instance:
  #
  # * for FPM::Package::Dir, << expects a path to a directory or files.
  # * for FPM::Package::RPM, << expects a path to an rpm.
  #
  # The idea is that you can keep pumping in new things to a package
  # for later conversion or output.
  #
  # Implementations are expected to put files relevant to the 'input' in the
  # staging_path
  def input(thing_to_input)
    raise NotImplementedError.new('#{self.class.name} does not yet support ' \
                                  'reading #{self.type} packages')
  end # def input
    
        for i in (start..finish)
      str[i] = character
    end
    
    # A directory package.
#
# This class supports both input and output. As a note, 'output' will
# only emit the files, not any metadata. This is an effective way
# to extract another package type.
class FPM::Package::Dir < FPM::Package
  private
    
      public(:input, :output, :identifier, :to_s)
    
        cwd = ::Dir.pwd
    ::Dir.chdir(staging_path)
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end
    
      # Where we keep metadata and post install scripts and such
  def fpm_meta_path
    @fpm_meta_path ||= begin
                         path = File.join(staging_path, '.fpm')
                         FileUtils.mkdir_p(path)
                         path
                       end
  end
end

    
      private