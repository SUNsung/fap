
        
            def action_completed(action_name, status: nil, exception: nil)
      # https://github.com/fastlane/fastlane/issues/11913
      # if exception.nil? || exception.fastlane_should_report_metrics?
      #   action_completion_context = FastlaneCore::ActionCompletionContext.context_for_action_name(action_name, args: ARGV, status: status)
      #   FastlaneCore.session.action_completed(completion_context: action_completion_context)
      # end
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
            grouping: 'grouping',
            build_number: 'build_number',
            prefix: 'prefix',
          })
        end').runner.execute(:test)
    
            context 'when command is bootstrap' do
          let(:command) { 'bootstrap' }
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
          # If the record is persisted, remove the remember token (but only if
      # it exists), and save the record without validations.
      def forget_me!
        return unless persisted?
        self.remember_token = nil if respond_to?(:remember_token)
        self.remember_created_at = nil if self.class.expire_all_remember_me_on_sign_out
        save(validate: false)
      end
    
    SimpleCov.start do
  coverage_dir File.expand_path('../test/coverage', File.realpath(__FILE__))
  root File.expand_path('..', File.realpath(__FILE__))
    
        def to_f
      return 0 if @d == 0
      if @d > 0
        Float::INFINITY
      else
        -Float::INFINITY
      end
    end
    
    require 'mkmf'
require File.expand_path('../../digest_conf', __FILE__)
    
    # non-standard
_SC_PHYS_PAGES
_SC_AVPHYS_PAGES
_SC_NPROCESSORS_CONF
_SC_NPROCESSORS_ONLN
_SC_CPUSET_SIZE
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      describe '#base_index' do
    context 'when pane_base_index is 1 and base_index is unset' do
      before do
        allow(project).to receive_messages(get_pane_base_index: '1')
        allow(project).to receive_messages(get_base_index: nil)
      end
    
        class << self
      # The directory (created if needed) in which to store new projects
      def directory
        return environment if environment?
        return xdg if xdg?
        return home if home?
        # No project directory specified or existant, default to XDG:
        FileUtils::mkdir_p(xdg)
        xdg
      end
    
      describe '#start(custom_name)' do
    before do
      ARGV.replace(['start', 'foo', 'bar'])
      allow(Tmuxinator::Config).to receive_messages(validate: project)
      allow(Tmuxinator::Config).to receive_messages(version: 1.9)
      allow(Kernel).to receive(:exec)
    end
    
      before { instance.extend Tmuxinator::WemuxSupport }