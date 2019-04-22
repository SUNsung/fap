
        
        # Use an OS X pkg built with pkgbuild.
#
# Supports input and output. Requires pkgbuild and (for input) pkgutil, part of a
# standard OS X install in 10.7 and higher.
class FPM::Package::OSXpkg < FPM::Package
    
        # do channel-discover if required
    if !attributes[:pear_channel].nil?
      logger.info('Custom channel specified', :channel => attributes[:pear_channel])
      channel_list = safesystemout('pear', '-c', config, 'list-channels')
      if channel_list !~ /#{Regexp.quote(attributes[:pear_channel])}/
        logger.info('Discovering new channel', :channel => attributes[:pear_channel])
        safesystem('pear', '-c', config, 'channel-discover', attributes[:pear_channel])
      end
      input_package = '#{attributes[:pear_channel]}/#{input_package}'
      logger.info('Prefixing package name with channel', :package => input_package)
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
    
      def initialize(package_name, opts = {}, &block)
    @options = OpenStruct.new(:name => package_name.to_s)
    @source, @target = opts.values_at(:source, :target).map(&:to_s)
    @directory = File.expand_path(opts[:directory].to_s)
    
      def is_pane
    @actual.is_a? Tmuxinator::Pane
  end
end

    
          # Pathname of given project searching only global directories
      def global_project(name)
        project_in(environment, name) ||
          project_in(xdg, name) ||
          project_in(home, name)
      end
    
      describe '#synchronize_before?' do
    subject { window.synchronize_before? }
    
            Kernel.exec(project.render)
      end
    
    Gem::Specification.new do |s|
  s.name          = 'tmuxinator'
  s.version       = Tmuxinator::VERSION
  s.authors       = ['Allen Bargi', 'Christopher Chow']
  s.email         = ['allen.bargi@gmail.com', 'chris@chowie.net']
  s.description   = %q{Create and manage complex tmux sessions easily.}
  s.summary       = %q{Create and manage complex tmux sessions easily.}
  s.homepage      = 'https://github.com/tmuxinator/tmuxinator'
  s.license       = 'MIT'