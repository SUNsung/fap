
        
              # Find commands in the path
      unless (exts = external_commands).empty?
        puts
        puts 'External commands'
        puts_columns exts
      end
    end
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
    
        def types_as_json
      @types.values.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
    require 'open-uri'
require 'json'
require 'strscan'
require 'forwardable'
require 'term/ansicolor'
require 'fileutils'
    
          def plugins_string
        UI::ErrorReport.plugins_string
      end