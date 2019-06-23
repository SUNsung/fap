
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
          #
    
      auto_updates true
  depends_on cask: 'homebrew/cask-versions/adobe-photoshop-lightroom600'
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
    module RuboCop
  module AST
    # Common functionality for nodes that can be used as hash elements:
    # `pair`, `kwsplat`
    module HashElementNode
      # Returns the key of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the key of the hash element
      def key
        node_parts[0]
      end
    
          def ignored_node?(node)
        # Same object found in array?
        ignored_nodes.any? { |n| n.equal?(node) }
      end
    
        pkg_origin = attributes[:freebsd_origin]
    if pkg_origin == 'fpm/<name>'  # fill in default
      pkg_origin = 'fpm/#{name}'
    end
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
      def build!(params)
    # TODO(sissel): Support these somehow, perhaps with execs and files.
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
        when 'post-install'
        when 'pre-uninstall'
        when 'post-uninstall'
      end # case name
    end # self.scripts.each
    
      def create_scripts
    if script?(:after_install)
      File.write(File.join(fpm_meta_path, 'after_install'), script(:after_install))
    end
  end
    
    class FPM::RakeTask < Rake::TaskLib
  attr_reader :options
    
    module FPM
  module Issues
    module TarWriter
      # See https://github.com/rubygems/rubygems/issues/1608
      def self.has_issue_1608?
        name, prefix = nil,nil
        io = StringIO.new
        ::Gem::Package::TarWriter.new(io) do |tw|
          name, prefix = tw.split_name('/123456789'*9 + '/1234567890') # abs name 101 chars long
        end
        return prefix.empty?
      end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
        def pre_window
      params = if rbenv?
                 'rbenv shell #{yaml['rbenv']}'
               elsif rvm?
                 'rvm use #{yaml['rvm']}'
               elsif pre_tab?
                 yaml['pre_tab']
               else
                 yaml['pre_window']
               end
      parsed_parameters(params)
    end
    
        def self.register(view_hash)
      view_hash.each do |view_key, view_class|
        super view_key, view_class
        add_writer(view_key)
        send '#{view_key}=', view_class
      end
    end
    
          # Override the default to_s to include a closing form tag
      def to_s
        content + closing_form_tag
      end
    
          # Return the set of batch actions that should be displayed
      def batch_actions_to_display
        @batch_actions.select do |batch_action|
          call_method_or_proc_on(self, batch_action.display_if_block)
        end
      end
    
      end
end

    
        def self.config
      {
        path: ActiveAdmin.application.default_namespace || '/',
        controllers: ActiveAdmin::Devise.controllers,
        path_names: { sign_in: 'login', sign_out: 'logout' },
        sign_out_via: [*::Devise.sign_out_via, ActiveAdmin.application.logout_link_method].uniq
      }
    end
    
        it { is_expected.to eq('') }
    
          def check_extension_whitelist!(new_file)
        extension = new_file.extension.to_s
        if extension_whitelist && !whitelisted_extension?(extension)
          raise CarrierWave::IntegrityError, I18n.translate(:'errors.messages.extension_whitelist_error', extension: new_file.extension.inspect, allowed_types: Array(extension_whitelist).join(', '))
        end
      end