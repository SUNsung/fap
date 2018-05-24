
        
            You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
      # True if a {Formula} is being built with a specific option.
  # <pre>args << '--i-want-spam' if build.with? 'spam'
  #
  # args << '--qt-gui' if build.with? 'qt' # '--with-qt' ==> build.with? 'qt'
  #
  # # If a formula presents a user with a choice, but the choice must be fulfilled:
  # if build.with? 'example2'
  #   args << '--with-example2'
  # else
  #   args << '--with-example1'
  # end</pre>
  def with?(val)
    option_names = val.respond_to?(:option_names) ? val.option_names : [val]
    
            file_is_stale = if PkgVersion === version
          f.pkg_version > version
        else
          f.version > version
        end
    
    module Homebrew
  def config
    dump_verbose_config
  end
    
        puts 'Your system is ready to brew.' unless Homebrew.failed?
  end
end

    
      def patches
    {}
  end
    
        let(:key) { Spaceship::Portal::Key.new(key_attributes) }
    
      def all_groups(current_user)
    groups = []
    
    require 'open-uri'
require 'json'
require 'strscan'
require 'forwardable'
require 'term/ansicolor'
require 'fileutils'
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end