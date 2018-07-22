
        
            You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
          keg_only_deps.each do |dep|
        ENV.prepend_path 'PATH', dep.opt_bin.to_s
        ENV.prepend_path 'PKG_CONFIG_PATH', '#{dep.opt_lib}/pkgconfig'
        ENV.prepend_path 'PKG_CONFIG_PATH', '#{dep.opt_share}/pkgconfig'
        ENV.prepend_path 'ACLOCAL_PATH', '#{dep.opt_share}/aclocal'
        ENV.prepend_path 'CMAKE_PREFIX_PATH', dep.opt_prefix.to_s
        ENV.prepend 'LDFLAGS', '-L#{dep.opt_lib}' if dep.opt_lib.directory?
        ENV.prepend 'CPPFLAGS', '-I#{dep.opt_include}' if dep.opt_include.directory?
      end
    end
    
      def zsh_completion_caveats
    if keg && keg.completion_installed?(:zsh) then <<-EOS.undent
      zsh completion has been installed to:
        #{HOMEBREW_PREFIX}/share/zsh/site-functions
      EOS
    end
  end
    
        dirs.each do |d|
      files = []
      d.find { |pn| files << pn unless pn.directory? }
      print_remaining_files files, d
    end
    
        if $stdout.tty?
      metacharacters = %w[\\ | ( ) [ ] { } ^ $ * + ? .]
      bad_regex = metacharacters.any? do |char|
        ARGV.any? do |arg|
          arg.include?(char) && !arg.start_with?('/')
        end
      end
      if ARGV.any? && bad_regex
        ohai 'Did you mean to perform a regular expression search?'
        ohai 'Surround your query with /slashes/ to search by regex.'
      end
    end
    
      def self.factory(name)
    Formulary.factory(name)
  end
    
    end

    
        def javascripts_path
      File.join assets_path, 'javascripts'
    end
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)