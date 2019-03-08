
        
            def empty?
      @entries.empty?
    end
    
              if node['class'] && node['class'].include?('api-heading')
            node.name = 'h3'
            node.inner_html = '<code>#{node.inner_html}</code>'
          end
    
            name.prepend '#{breadcrumbs.join('.')}#' if breadcrumbs.present? && breadcrumbs[0] != name
        name << '()' if %w(Function Method Constructor).include?(subtitle)
        name
      end
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
    Then(/^the invalid (.+) release is ignored$/) do |filename|
  test = 'ls -g #{TestApp.releases_path} | grep #{filename}'
  _, _, status = vagrant_cli_command('ssh -c #{test.shellescape}')
  expect(status).to be_success
end
    
          def fetch_primary(role)
        hosts = roles_for([role])
        hosts.find(&:primary) || hosts.first
      end
    
    set_if_empty :local_user, -> { ENV['USER'] || ENV['LOGNAME'] || ENV['USERNAME'] }

    
        ret = candidate_ret
    
    end
    
        # Copy 'files' from builddir to :output/files
    Find.find('files', 'manifests') do |path|
      logger.info('Copying path: #{path}')
      if File.directory?(path)
        ::Dir.mkdir(File.join(params[:output], path))
      else
        FileUtils.cp(path, File.join(params[:output], path))
      end
    end
  end # def build!
    
        # Some setup.py's assume $PWD == current directory of setup.py, so let's
    # chdir first.
    ::Dir.chdir(project_dir) do
      flags = [ '--root', staging_path ]
      if !attributes[:python_install_lib].nil?
        flags += [ '--install-lib', File.join(prefix, attributes[:python_install_lib]) ]
      elsif !attributes[:prefix].nil?
        # setup.py install --prefix PREFIX still installs libs to
        # PREFIX/lib64/python2.7/site-packages/
        # but we really want something saner.
        #
        # since prefix is given, but not python_install_lib, assume PREFIX/lib
        flags += [ '--install-lib', File.join(prefix, 'lib') ]
      end