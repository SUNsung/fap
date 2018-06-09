
        
            brew cask install mactex
    EOS
  when 'pip' then <<-EOS.undent
    Homebrew provides pip via: `brew install python`. However you will then
    have two Pythons installed on your Mac, so alternatively you can install
    pip via the instructions at:
    
      formula = ARGV.formulae.first
  options = Options.create(ARGV.flags_only)
  build   = Build.new(formula, options)
  build.install
rescue Exception => e
  Marshal.dump(e, error_pipe)
  error_pipe.close
  exit! 1
end

    
            if Pathname::BOTTLE_EXTNAME_RX === file.to_s
          version = bottle_resolve_version(file) rescue file.version
        else
          version = file.version
        end
        next unless version
        next unless (name = file.basename.to_s[/(.*)-(?:#{Regexp.escape(version)})/, 1])
    
      def internal_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'cmd'
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
    
      def is_form_configurable?
    true
  end
    
      included do
    include Oauthable
    
      def new
    @user_credential = current_user.user_credentials.build
    
    class SinatraStaticServer < Sinatra::Base
    
      end
    
      # Returns a url without the protocol (http://)
  def shorthand_url(input)
    input.gsub /(https?:\/\/)(\S+)/ do
      $2
    end
  end