
        
            # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
        def boolify(value)
      agent.send(:boolify, value)
    end
    
        if params[:sort].present?
      attribute, direction = params[:sort].downcase.split('.')
      unless valid_sorts.include?(attribute)
        attribute, direction = default.to_a.first
      end
    else
      attribute, direction = default.to_a.first
    end
    
        respond_to do |format|
      format.html { redirect_to jobs_path, notice: 'All jobs removed.' }
      format.json { head :no_content }
    end
  end
    
        respond_to do |format|
      format.html { redirect_to services_path }
      format.json { render json: @service }
    end
  end
end

    
        def tasks_without_stage_dependency
      stages + default_tasks
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
    
        # Provide a wrapper for the SCM that loads a strategy for the user.
    #
    # @param [Rake] context     The context in which the strategy should run
    # @param [Module] strategy  A module to include into the SCM instance. The
    #    module should provide the abstract methods of Capistrano::SCM
    #
    def initialize(context, strategy)
      @context = context
      singleton = class << self; self; end
      singleton.send(:include, strategy)
    end
    
      tasks_dir = Pathname.new('lib/capistrano/tasks')
  config_dir = Pathname.new('config')
  deploy_dir = config_dir.join('deploy')
    
    Liquid::Template.register_tag('config_tag', ConfigTag)
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end