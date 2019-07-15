
        
            it 'hardcoded g++ compiler system' do
      expect_offense(<<~'RUBY')
        class Foo < Formula
          desc 'foo'
          url 'https://brew.sh/foo-1.0.tgz'
          def install
            system '/usr/bin/g++', '-o', 'foo', 'foo.cc'
                    ^^^^^^^^^^^^ Use '#{ENV.cxx}' instead of hard-coding 'g++'
          end
        end
      RUBY
    end
    
        it 'acts like #depends_on' do
      f = formula 'foo' do
        url 'foo-1.0'
    
          def initialize(*)
        super
        self.verbose = ($stdout.tty? || verbose?) && !quiet?
      end
    
      def refspec
    case @ref_type
    when :branch then '+refs/heads/#{@ref}:refs/remotes/origin/#{@ref}'
    when :tag    then '+refs/tags/#{@ref}:refs/tags/#{@ref}'
    else              '+refs/heads/master:refs/remotes/origin/master'
    end
  end
    
          def pretty_name
        to_sym.to_s.split('_').map(&:capitalize).join(' ')
      end
    
          if index = args.index(command)
        args.delete_at(index)
      end
    
      it 'prints the file used to cache the Cask' do
    transmission_location = CurlDownloadStrategy.new(
      local_transmission.url.to_s, local_transmission.token, local_transmission.version,
      cache: Cask::Cache.path, **local_transmission.url.specs
    ).cached_location
    caffeine_location = CurlDownloadStrategy.new(
      local_caffeine.url.to_s, local_caffeine.token, local_caffeine.version,
      cache: Cask::Cache.path, **local_caffeine.url.specs
    ).cached_location