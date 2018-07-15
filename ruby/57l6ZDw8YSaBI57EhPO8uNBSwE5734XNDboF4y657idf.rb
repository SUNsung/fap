
        
              # we readlink because this path probably doesn't exist since caveats
      # occurs before the link step of installation
      # Yosemite security measures mildly tighter rules:
      # https://github.com/Homebrew/homebrew/issues/33815
      if !plist_path.file? || !plist_path.symlink?
        if f.plist_startup
          s << 'To have launchd start #{f.full_name} at startup:'
          s << '  sudo mkdir -p #{destination}' unless destination_path.directory?
          s << '  sudo cp -fv #{f.opt_prefix}/*.plist #{destination}'
          s << '  sudo chown root #{plist_link}'
        else
          s << 'To have launchd start #{f.full_name} at login:'
          s << '  mkdir -p #{destination}' unless destination_path.directory?
          s << '  ln -sfv #{f.opt_prefix}/*.plist #{destination}'
        end
        s << 'Then to load #{f.full_name} now:'
        if f.plist_startup
          s << '  sudo launchctl load #{plist_link}'
        else
          s << '  launchctl load #{plist_link}'
        end
      # For startup plists, we cannot tell whether it's running on launchd,
      # as it requires for `sudo launchctl list` to get real result.
      elsif f.plist_startup
        s << 'To reload #{f.full_name} after an upgrade:'
        s << '  sudo launchctl unload #{plist_link}'
        s << '  sudo cp -fv #{f.opt_prefix}/*.plist #{destination}'
        s << '  sudo chown root #{plist_link}'
        s << '  sudo launchctl load #{plist_link}'
      elsif Kernel.system '/bin/launchctl list #{plist_domain} &>/dev/null'
        s << 'To reload #{f.full_name} after an upgrade:'
        s << '  launchctl unload #{plist_link}'
        s << '  launchctl load #{plist_link}'
      else
        s << 'To load #{f.full_name}:'
        s << '  launchctl load #{plist_link}'
      end
    
        # Remove unresolved symlinks
    symlinks.reverse_each do |s|
      s.unlink unless s.resolved_path_exists?
    end
  end
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
    # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install