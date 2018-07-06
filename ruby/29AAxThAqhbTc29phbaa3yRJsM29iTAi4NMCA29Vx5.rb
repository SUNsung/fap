
        
              https://pip.readthedocs.org/en/stable/installing/#install-pip
    EOS
  when 'pil' then <<-EOS.undent
    Instead of PIL, consider `pip install pillow` or `brew install Homebrew/python/pillow`.
    EOS
  when 'macruby' then <<-EOS.undent
    MacRuby works better when you install their package:
      http://www.macruby.org/
    EOS
  when /(lib)?lzma/
    'lzma is now part of the xz formula.'
  when 'xcode'
    if MacOS.version >= :lion
      <<-EOS.undent
      Xcode can be installed from the App Store.
      EOS
    else
      <<-EOS.undent
      Xcode can be installed from https://developer.apple.com/xcode/downloads/
      EOS
    end
  when 'gtest', 'googletest', 'google-test' then <<-EOS.undent
    Installing gtest system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'gmock', 'googlemock', 'google-mock' then <<-EOS.undent
    Installing gmock system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'sshpass' then <<-EOS.undent
    We won't add sshpass because it makes it too easy for novice SSH users to
    ruin SSH's security.
    EOS
  when 'gsutil' then <<-EOS.undent
    Install gsutil with `pip install gsutil`
    EOS
  when 'clojure' then <<-EOS.undent
    Clojure isn't really a program but a library managed as part of a
    project and Leiningen is the user interface to that library.
    
      def expand_reqs
    formula.recursive_requirements do |dependent, req|
      build = effective_build_options_for(dependent)
      if (req.optional? || req.recommended?) && build.without?(req)
        Requirement.prune
      elsif req.build? && dependent != formula
        Requirement.prune
      elsif req.satisfied? && req.default_formula? && (dep = req.to_dependency).installed?
        deps << dep
        Requirement.prune
      end
    end
  end
    
    module Homebrew
  module Cleanup
    @@disk_cleanup_size = 0
    
      def search
    if ARGV.empty?
      puts_columns Formula.full_names
    elsif ARGV.include? '--macports'
      exec_browser 'https://www.macports.org/ports.php?by=name&substr=#{ARGV.next}'
    elsif ARGV.include? '--fink'
      exec_browser 'http://pdb.finkproject.org/pdb/browse.php?summary=#{ARGV.next}'
    elsif ARGV.include? '--debian'
      exec_browser 'https://packages.debian.org/search?keywords=#{ARGV.next}&searchon=names&suite=all&section=all'
    elsif ARGV.include? '--opensuse'
      exec_browser 'https://software.opensuse.org/search?q=#{ARGV.next}'
    elsif ARGV.include? '--fedora'
      exec_browser 'https://admin.fedoraproject.org/pkgdb/packages/%2A#{ARGV.next}%2A/'
    elsif ARGV.include? '--ubuntu'
      exec_browser 'http://packages.ubuntu.com/search?keywords=#{ARGV.next}&searchon=names&suite=all&section=all'
    elsif ARGV.include? '--desc'
      query = ARGV.next
      rx = query_regexp(query)
      Descriptions.search(rx, :desc).print
    elsif ARGV.first =~ HOMEBREW_TAP_FORMULA_REGEX
      query = ARGV.first
      user, repo, name = query.split('/', 3)
    
          def self.category
        :misc
      end
    end
  end
end

    
      def test_argv0
    PTY.spawn([RUBY, 'argv0'], '-e', 'puts 'bar'') {|r,w,pid|
      begin
        assert_equal('bar\r\n', r.gets)
      ensure
        r.close
        w.close
        Process.wait(pid)
      end
    }
  rescue RuntimeError
    skip $!
  end
    
        it 'returns nil if incompatible encodings' do
      'あれ'.casecmp?('れ'.encode(Encoding::EUC_JP)).should be_nil
    end
    
      describe 'rb_call_super' do
    it 'calls the method in the superclass' do
      @s.define_call_super_method CApiClassSpecs::Sub, 'call_super_method'
      obj = CApiClassSpecs::Sub.new
      obj.call_super_method.should == :super_method
    end
    
        def initialize(username, domain)
      @username = username
      @domain = domain
    end
    
      private
    
        export LANG=en_US.UTF-8
    \e[0m
    DOC
  end
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
            app_targets.each do |app_target|
          test_targets_for_app = test_targets.select do |target|
            target.name.downcase.start_with?(app_target.name.downcase)
          end
          podfile << target_module(app_target, test_targets_for_app)
        end