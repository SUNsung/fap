
        
          test 'broadcasting_for with a string' do
    assert_equal 'hello', ChatChannel.broadcasting_for('hello')
  end
end

    
    require 'test_helper'
require 'stubs/test_server'
    
          assert_called(@connection.websocket, :close) do
        @connection.process_internal_message 'type' => 'disconnect'
      end
    end
  end
    
    require 'test_helper'
require 'stubs/test_server'
require 'active_support/core_ext/hash/indifferent_access'
    
        To install Clojure you should install Leiningen:
      brew install leiningen
    and then follow the tutorial:
      https://github.com/technomancy/leiningen/blob/stable/doc/TUTORIAL.md
    EOS
  when 'osmium' then <<-EOS.undent
    The creator of Osmium requests that it not be packaged and that people
    use the GitHub master branch instead.
    EOS
  when 'gfortran' then <<-EOS.undent
    GNU Fortran is now provided as part of GCC, and can be installed with:
      brew install gcc
    EOS
  when 'play' then <<-EOS.undent
    Play 2.3 replaces the play command with activator:
      brew install typesafe-activator
    
      def userpaths?
    @settings.include? :userpaths
  end
end
    
          if path.symlink? || path.directory?
        next
      elsif path.extname == '.la'
        path.unlink
      else
        # Set permissions for executables and non-executables
        perms = if path.mach_o_executable? || path.text_executable?
          0555
        else
          0444
        end
        if ARGV.debug?
          old_perms = path.stat.mode & 0777
          if perms != old_perms
            puts 'Fixing #{path} permissions from #{old_perms.to_s(8)} to #{perms.to_s(8)}'
          end
        end
        path.chmod perms
      end
    end
  end
end

    
        if ARGV.include? '--list-checks'
      puts checks.all.sort
      exit
    end
    
        results.map do |name|
      begin
        formula = Formulary.factory(name)
        canonical_name = formula.name
        canonical_full_name = formula.full_name
      rescue
        canonical_name = canonical_full_name = name
      end
      # Ignore aliases from results when the full name was also found
      if aliases.include?(name) && results.include?(canonical_full_name)
        next
      elsif (HOMEBREW_CELLAR/canonical_name).directory?
        pretty_installed(name)
      else
        name
      end
    end.compact
  end
end

    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
      included do
    scope :admins, -> { where(admin: true) }
    scope :moderators, -> { where(moderator: true) }
    scope :staff, -> { where('moderator or admin ') }
  end
    
      def id
    object.id.to_s
  end
    
        existence_maps = grouped_codes.map { |c| c.map { |cc| [cc, File.exist?(Rails.root.join('public', 'emoji', codepoints_to_filename(cc) + '.svg'))] }.to_h }
    map = {}
    
    module Sinatra
  class Application < Base
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
      it 'denies requests with a changing User-Agent header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'b'
    expect(session).to be_empty
  end