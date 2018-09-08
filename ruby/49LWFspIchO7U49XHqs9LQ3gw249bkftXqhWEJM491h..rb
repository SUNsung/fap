
        
        def global_require
  JSON.pretty_generate(DATA)
end
    
    When(%r!^I decide to build the theme gem$!) do
  Dir.chdir(Paths.theme_gem_dir)
  File.new('_includes/blank.html', 'w')
  File.new('_sass/blank.scss', 'w')
  File.new('assets/blank.scss', 'w')
end
    
        # Private: The list of directories that need to be kept because they are
    # parent directories of files specified in keep_files
    #
    # Returns a Set with the directory paths
    def keep_dirs
      site.keep_files.map { |file| parent_dirs(site.in_dest_dir(file)) }.flatten.to_set
    end
    
    module Jekyll
  module Commands
    class Build < Command
      class << self
        # Create the Mercenary command for the Jekyll CLI for this Command
        def init_with_program(prog)
          prog.command(:build) do |c|
            c.syntax      'build [options]'
            c.description 'Build your site'
            c.alias :b
    
        def translation_scope
      'devise.confirmations'
    end
end

    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
        get '/'
    assert last_response.ok?
  end
    
        proxy = Devise::Hooks::Proxy.new(warden)