
        
          next if extensions.empty?
  mimes[mime] = [] if mimes[mime].nil?
  mimes[mime].concat extensions
end
    
      Jekyll::Command.subclasses.each { |c| c.init_with_program(p) }
    
    #
    
            c.action do |args, opts|
          Jekyll::Commands::NewTheme.process(args, opts)
        end
      end
    end
    
    module Jekyll
  module Deprecator
    extend self
    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
        # Gets/Sets the Hash that holds the metadata for this layout.
    attr_accessor :data
    
          def warnings
        @template.warnings
      end
    
        def to_a
      @filters.dup
    end
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
      def contents
    data = ''
    path.open('rb') do |f|
      loop do
        line = f.gets
        break if line.nil? || line =~ /^__END__$/
      end
      while line = f.gets
        data << line
      end
    end
    data
  end
end
    
        Keg::PRUNEABLE_DIRECTORIES.each do |dir|
      next unless dir.directory?
      dir.find do |path|
        path.extend(ObserverPathnameExtension)
        if path.symlink?
          unless path.resolved_path_exists?
            if path.to_s =~ Keg::INFOFILE_RX
              path.uninstall_info unless ARGV.dry_run?
            end
    
        # Sort keg_only before non-keg_only formulae to avoid any needless conflicts
    # with outdated, non-keg_only versions of formulae being upgraded.
    formulae_to_install.sort! do |a, b|
      if !a.keg_only? && b.keg_only?
        1
      elsif a.keg_only? && !b.keg_only?
        -1
      else
        0
      end
    end
    
    module Capistrano
  module Doctor
    # Prints table of all Capistrano-related gems and their version numbers. If
    # there is a newer version of a gem available, call attention to it.
    class GemsDoctor
      include Capistrano::Doctor::OutputHelpers
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
    # IMPORTANT: The Capistrano::Plugin system is not yet considered a stable,
# public API, and is subject to change without notice. Eventually it will be
# officially documented and supported, but for now, use it at your own risk.
#
# Base class for Capistrano plugins. Makes building a Capistrano plugin as easy
# as writing a `Capistrano::Plugin` subclass and overriding any or all of its
# three template methods:
#
# * set_defaults
# * register_hooks
# * define_tasks
#
# Within the plugin you can use any methods of the Rake or Capistrano DSLs, like
# `fetch`, `invoke`, etc. In cases when you need to use SSHKit's backend outside
# of an `on` block, use the `backend` convenience method. E.g. `backend.test`,
# `backend.execute`, or `backend.capture`.
#
# Package up and distribute your plugin class as a gem and you're good to go!
#
# To use a plugin, all a user has to do is install it in the Capfile, like this:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy
#
# Or, to install the plugin without its hooks:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy, load_hooks: false
#
class Capistrano::Plugin < Rake::TaskLib
  include Capistrano::DSL
    
          describe 'using the :port property' do
        it 'takes precedence over in the host string' do
          dsl.server 'db@example1.com:9090', roles: %w{db}, active: true, port: 1234
          expect(subject).to eq('db@example1.com:1234')
        end
      end
    end
  end