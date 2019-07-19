
        
                subject.exec
      end
    end
    
    describe Gitlab::BackgroundMigration::EncryptRunnersTokens, :migration, schema: 20181121111200 do
  let(:settings) { table(:application_settings) }
  let(:namespaces) { table(:namespaces) }
  let(:projects) { table(:projects) }
  let(:runners) { table(:ci_runners) }
    
    # This class finds files in a repository by name and content
# the result is joined and sorted by file name
module Gitlab
  class FileFinder
    attr_reader :project, :ref
    
      it 'returns members for nested group', :nested_groups do
    group.add_developer(user2)
    nested_group.request_access(user4)
    member1 = group.add_maintainer(user1)
    member3 = nested_group.add_maintainer(user2)
    member4 = nested_group.add_maintainer(user3)
    
      def self.link(title)
    title.downcase.gsub(/(?!-)\W /, '-').gsub(' ', '-').gsub(/(?!-)\W/, '')
  end
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
        def frame_class(frame)
      if frame.filename =~ %r{lib/sinatra.*\.rb}
        'framework'
      elsif (defined?(Gem) && frame.filename.include?(Gem.dir)) ||
            frame.filename =~ %r{/bin/(\w+)\z}
        'system'
      else
        'app'
      end
    end
    
          def mask_authenticity_token(session)
        token = set_token(session)
        mask_token(token)
      end
    
          def random_string(secure = defined? SecureRandom)
        secure ? SecureRandom.hex(16) : '%032x' % rand(2**128-1)
      rescue NotImplementedError
        random_string false
      end
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
      it_behaves_like 'any rack application'
    
          context 'with --suppress-tmux-version-warning flag' do
        before do
          ARGV.replace([*args, '--suppress-tmux-version-warning'])
        end
    
        def tmux_tiled_layout_command
      '#{project.tmux} select-layout -t #{tmux_window_target} tiled'
    end
    
      factory :project_with_force_detach, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/detach.yml') }
    end
    initialize_with { Tmuxinator::Project.new(file, force_detach: true) }
  end
    
        def startup_pane
      '#{startup_window}.#{yaml['startup_pane'] || pane_base_index}'
    end
    
          def version
        if Tmuxinator::Doctor.installed?
          tmux_version = `tmux -V`.split(' ')[1]