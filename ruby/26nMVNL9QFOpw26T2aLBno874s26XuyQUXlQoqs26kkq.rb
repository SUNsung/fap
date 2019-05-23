
        
                      # Rename :minute and :second to :min and :sec
              default[:min] ||= default[:minute]
              default[:sec] ||= default[:second]
    
            def initialize(symbol)
          @symbol = symbol.to_sym
        end
    
        class WithSymbolAndNoMethod < Base
      layout :no_method
    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
          # Sets a key to the given integer but only if the existing value is
      # smaller than the given value.
      #
      # This method uses a Lua script to ensure the read and write are atomic.
      #
      # raw_key - The key to set.
      # value - The new value for the key.
      # timeout - The key timeout in seconds.
      #
      # Returns true when the key was overwritten, false otherwise.
      def self.write_if_greater(raw_key, value, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
        val = Redis::Cache.with do |redis|
          redis
            .eval(WRITE_IF_GREATER_SCRIPT, keys: [key], argv: [value, timeout])
        end
    
            def representation_class
          Representation::DiffNote
        end
    
          def cache_key_iid
        if object.respond_to?(:noteable_id)
          object.noteable_id
        elsif object.respond_to?(:iid)
          object.iid
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    end
  end
end

    
            # Builds a new issue using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
            # This returns all the registered guests.
        #
        # @return [Hash]
        def guests
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.guests)
            end
          end
        end
    
    # define charCodeAt on String
class String
  def charCodeAt(k)
    # use scan, nil check, and unpack instead of ord for 1.8
    # 1.9 can simply use self[k].ord
    # http://stackoverflow.com/questions/7793177/split-utf8-string-regardless-of-ruby-version
    c = self.scan(/./mu)[k]
    return nil if c.nil?
    c.unpack('U')[0]
  end
end
    
          def upload_dest
        @upload_dest
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
          def has_path
        !@path.nil?
      end
    
    
  test 'renames page in subdirectory' do
    page_1 = @wiki.paged('H', 'G')
    assert_not_equal page_1, nil
    post '/rename/G/H', :rename => '/I/C', :message => 'def'
    
      teardown do
    FileUtils.rm_r(File.join(File.dirname(__FILE__), *%w[examples test.git]))
  end
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
      # Default specfile generator just makes one specfile, whatever that is for
  # this package.
  def generate_specfile(builddir)
    paths = []
    logger.info('PWD: #{File.join(builddir, unpack_data_to)}')
    fileroot = File.join(builddir, unpack_data_to)
    Dir.chdir(fileroot) do
      Find.find('.') do |p|
        next if p == '.'
        paths << p
      end
    end
    logger.info(paths[-1])
    manifests = %w{package.pp package/remove.pp}
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']
    
        if op == '~>'