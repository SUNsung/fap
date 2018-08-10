
        
            You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
      def std?
    @settings.include? :std
  end
    
        def self.cleanup_cache
      return unless HOMEBREW_CACHE.directory?
      HOMEBREW_CACHE.children.each do |path|
        if path.to_s.end_with? '.incomplete'
          cleanup_path(path) { path.unlink }
          next
        end
        if path.basename.to_s == 'java_cache' && path.directory?
          cleanup_path(path) { FileUtils.rm_rf path }
          next
        end
        if prune?(path)
          if path.file?
            cleanup_path(path) { path.unlink }
          elsif path.directory? && path.to_s.include?('--')
            cleanup_path(path) { FileUtils.rm_rf path }
          end
          next
        end
    
      def describe_ruby
    ruby = which 'ruby'
    return 'N/A' if ruby.nil?
    ruby_binary = Utils.popen_read ruby, '-rrbconfig', '-e', \
      'include RbConfig;print'#{CONFIG['bindir']}/#{CONFIG['ruby_install_name']}#{CONFIG['EXEEXT']}''
    ruby_binary = Pathname.new(ruby_binary).realpath
    if ruby == ruby_binary
      ruby
    else
      '#{ruby} => #{ruby_binary}'
    end
  end
    
        checks.inject_dump_stats! if ARGV.switch? 'D'
    
    class PrettyListing
  def initialize(path)
    Pathname.new(path).children.sort_by { |p| p.to_s.downcase }.each do |pn|
      case pn.basename.to_s
      when 'bin', 'sbin'
        pn.find { |pnn| puts pnn unless pnn.directory? }
      when 'lib'
        print_dir pn do |pnn|
          # dylibs have multiple symlinks and we don't care about them
          (pnn.extname == '.dylib' || pnn.extname == '.pc') && !pnn.symlink?
        end
      else
        if pn.directory?
          if pn.symlink?
            puts '#{pn} -> #{pn.readlink}'
          else
            print_dir pn
          end
        elsif Metafiles.list?(pn.basename.to_s)
          puts pn
        end
      end
    end
  end
    
              subtree, file = File.split(object['path'])
    
    BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file