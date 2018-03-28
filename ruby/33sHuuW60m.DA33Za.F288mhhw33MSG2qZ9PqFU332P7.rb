
        
        # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
    require 'pry'
$LOAD_PATH.unshift File.expand_path('../lib', __dir__)
require 'jekyll'
    
      # If a given extension is listed multiple times, prefer the first one listed
  extensions.reject! { |extension| mimes.values.flatten.include?(extension) }
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
        # --
    # NOTE: Pathutil#in_path? gets the realpath.
    # @param [<Anything>] entry the entry you want to validate.
    # Check if a path is outside of our given root.
    # --
    def symlink_outside_site_source?(entry)
      !Pathutil.new(entry).in_path?(
        site.in_source_dir
      )
    end
    
    If you run into trouble, you can find helpful resources at https://jekyllrb.com/help/!
            MSG
            raise Jekyll::Errors::MissingDependencyException, name
          end
        end
      end
    end
  end
end

    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :name,
                                       env_name: 'KEYCHAIN_NAME',
                                       description: 'Keychain name',
                                       conflicting_options: [:path],
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :path,
                                       env_name: 'KEYCHAIN_PATH',
                                       description: 'Path to keychain',
                                       is_string: true,
                                       conflicting_options: [:name],
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :password,
                                       env_name: 'KEYCHAIN_PASSWORD',
                                       description: 'Password for the keychain',
                                       sensitive: true,
                                       optional: false),
          FastlaneCore::ConfigItem.new(key: :default_keychain,
                                       description: 'Should the newly created Keychain be the new system default keychain',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :unlock,
                                       description: 'Unlock keychain after create',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :timeout,
                                       description: 'timeout interval in seconds. Set `false` if you want to specify 'no time-out'',
                                       is_string: false,
                                       default_value: 300),
          FastlaneCore::ConfigItem.new(key: :lock_when_sleeps,
                                       description: 'Lock keychain when the system sleeps',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :lock_after_timeout,
                                       description: 'Lock keychain after timeout interval',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :add_to_search_list,
                                       description: 'Add keychain to search list',
                                       is_string: false,
                                       default_value: true)
        ]
      end
    
          it 'renders HTML' do
        expect(render(options, screenshots)).to match(/<html>/)
      end
    end
    
          if t > 0.0 and t < isect.t then
        isect.t = t
        isect.hit = true
        isect.pl = Vec.new(ray.org.x + ray.dir.x * t,
                          ray.org.y + ray.dir.y * t,
                          ray.org.z + ray.dir.z * t)
        n = isect.pl.vsub(@center)
        isect.n = n.vnormalize
      else
        0.0
      end
    end
    nil
  end
end
    
    def piece(n, a, nb)
  nb.each{|x|
    a[n] = x
    if n == NP-1
      $p << [a.sort]
    else
      nbc=nb.dup
      [-ROW, -1, 1, ROW].each{|d|
        if x+d > 0 and not a.include?(x+d) and not nbc.include?(x+d)
          nbc << x+d
        end
      }
      nbc.delete x
      piece(n+1,a[0..n],nbc)
    end
  }
end
    
            # If we were on Postgres 9.5+, we could do CREATE SEQUENCE IF
        # NOT EXISTS, but we can't depend on that. Instead, catch the
        # possible exception and ignore it.
        # Note that seq_name isn't a column name, but it's a
        # relation, like a column, and follows the same quoting rules
        # in Postgres.
        connection.execute(<<~SQL)
          DO $$
            BEGIN
              CREATE SEQUENCE #{connection.quote_column_name(seq_name)};
            EXCEPTION WHEN duplicate_table THEN
              -- Do nothing, we have the sequence already.
            END
          $$ LANGUAGE plpgsql;
        SQL
      end
    end
    
      # Before we load the schema, define the timestamp_id function.
  # Idiomatically, we might do this in a migration, but then it
  # wouldn't end up in schema.rb, so we'd need to figure out a way to
  # get it in before doing db:setup as well. This is simpler, and
  # ensures it's always in place.
  Rake::Task['db:schema:load'].enhance ['db:define_timestamp_id']
    
      def initial_state_params
    {
      settings: {},
      token: current_session&.token,
    }
  end
end

    
          expect(response).to redirect_to(settings_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
    namespace :emojis do
  desc 'Generate a unicode to filename mapping'
  task :generate do
    source = 'http://www.unicode.org/Public/emoji/5.0/emoji-test.txt'
    codes  = []
    dest   = Rails.root.join('app', 'javascript', 'mastodon', 'features', 'emoji', 'emoji_map.json')
    
    Given an Application (app) bundle directory on disk, find all
login items associated with that app, which you can use in a
Cask uninstall stanza, eg
    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end