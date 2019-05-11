
        
          gem.licenses      = ['MIT']
    
    Given(/^an invalid release named '(.+)'$/) do |filename|
  run_vagrant_command('mkdir -p #{TestApp.release_path(filename)}')
end

    
        def any?(key)
      value = fetch(key)
      if value && value.respond_to?(:any?)
        begin
          return value.any?
        rescue ArgumentError # rubocop:disable Lint/HandleExceptions
          # Gracefully ignore values whose `any?` method doesn't accept 0 args
        end
      end
    
          def response
        return @response if defined? @response
    
          ServerKey = Struct.new(:hostname, :port)
    
          private
    
            def current
          @order = find_current_order
          if @order
            respond_with(@order, default_template: :show, locals: { root_object: @order })
          else
            head :no_content
          end
        end
    
      # Used on the blog index to split posts on the <!--more--> marker
  def excerpt(input)
    if input.index(/<!--\s*more\s*-->/i)
      input.split(/<!--\s*more\s*-->/i)[0]
    else
      input
    end
  end
    
    # enable logging
FPM::Util.send :module_function, :logger
FPM::Util.logger.level = :info
FPM::Util.logger.subscribe STDERR
    
      def to_s(format=nil)
    return super('NAME_FULLVERSION_ARCH.TYPE') if format.nil?
    return super(format)
  end
    
      end # def output
end # class FPM::Package::IPS

    
        if script?(:before_install) or script?(:after_install) or \
        script?(:before_upgrade) or script?(:after_upgrade) or \
        script?(:before_remove) or script?(:after_remove)
      install_script = template('pacman/INSTALL.erb').result(binding)
      install_script_file = build_path('.INSTALL')
      File.write(install_script_file, install_script)
    end
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']
    
        cleanup_staging
    # Tell 'dir' to input '.' and chdir/prefix will help it figure out the
    # rest.
    dir.input('.')
    @staging_path = dir.staging_path
    dir.cleanup_build
  end # def input