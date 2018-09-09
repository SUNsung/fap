
        
        def global_require
  JSON.pretty_generate(DATA)
end
    
    require 'erb'
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
      def app_caveats
    if keg && keg.app_installed?
      <<-EOS.undent
        .app bundles were installed.
        Run `brew linkapps #{keg.name}` to symlink these to /Applications.
      EOS
    end
  end
    
        if ARGV.include? '--list-checks'
      puts checks.all.sort
      exit
    end
    
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
    
      def migrate_tap_migration
    report[:D].each do |full_name|
      name = full_name.split('/').last
      next unless (dir = HOMEBREW_CELLAR/name).exist? # skip if formula is not installed.
      next unless new_tap_name = tap.tap_migrations[name] # skip if formula is not in tap_migrations list.
      tabs = dir.subdirs.map { |d| Tab.for_keg(Keg.new(d)) }
      next unless tabs.first.tap == tap # skip if installed formula is not from this tap.
      new_tap = Tap.fetch(new_tap_name)
      new_tap.install unless new_tap.installed?
      # update tap for each Tab
      tabs.each { |tab| tab.tap = new_tap }
      tabs.each(&:write)
    end
  end
    
            format('%*e', -20, 109.52).should == '1.095200e+02        '
        format('%*E', -20, 109.52).should == '1.095200E+02        '
        format('%*f', -20, 10.952).should == '10.952000           '
        format('%*g', -20, 12.1234).should == '12.1234             '
        format('%*G', -20, 12.1234).should == '12.1234             '
        format('%*a', -20, 196).should == '0x1.88p+7           '
        format('%*A', -20, 196).should == '0X1.88P+7           '
    
        $?.should be_an_instance_of Process::Status
    $?.success?.should == false
    $?.exitstatus.should == 1
  end
    
          it 'raises TypeError if passed not Integer' do
        -> { warn '', uplevel: '' }.should raise_error(TypeError)
        -> { warn '', uplevel: [] }.should raise_error(TypeError)
        -> { warn '', uplevel: {} }.should raise_error(TypeError)
        -> { warn '', uplevel: Object.new }.should raise_error(TypeError)
      end
    end
  end
end
