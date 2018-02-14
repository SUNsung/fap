
        
              new_theme_name = args.join('_')
      theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
      if theme.path.exist?
        Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.'
      end
    
          process(name)
      read_yaml(base, name)
    end
    
        if f.keg_only?
      keg_site_packages = f.opt_prefix/'lib/python2.7/site-packages'
      unless Language::Python.in_sys_path?('python', keg_site_packages)
        s = <<-EOS.undent
          If you need Python to find bindings for this keg-only formula, run:
            echo #{keg_site_packages} >> #{homebrew_site_packages/f.name}.pth
        EOS
        s += instructions unless Language::Python.reads_brewed_pth_files?('python')
      end
      return s
    end
    
      def origin
    Homebrew.git_origin || '(none)'
  end