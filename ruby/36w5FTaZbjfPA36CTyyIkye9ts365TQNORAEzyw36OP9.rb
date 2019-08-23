
        
            it 'syncs added folders to the proper path' do
      paths['/foo'] = [
        { machine: machine_stub('m1'), opts: double('opts_m1') },
        { machine: machine_stub('m2'), opts: double('opts_m2') },
      ]
      paths['/bar'] = [
        { machine: machine_stub('m3'), opts: double('opts_m3') },
      ]
    
      let(:box_collection) { Vagrant::BoxCollection.new(environment.boxes_dir) }
    
      subject { described_class }
    
          pushes = self.vagrantfile.config.push.__compiled_pushes
      if !pushes.key?(name)
        raise Vagrant::Errors::PushStrategyNotDefined,
          name: name,
          pushes: pushes.keys
      end
    
            # Save the composition
        #
        # @param [Hash] composition New composition
        def write_composition(composition)
          @logger.debug('Saving composition to `#{composition_path}`: #{composition}')
          tmp_file = Tempfile.new('vagrant-docker-compose')
          tmp_file.write(composition.to_yaml)
          tmp_file.close
          synchronized do
            FileUtils.mv(tmp_file.path, composition_path.to_s)
          end
        end
    
              ui.output(I18n.t(
            'vagrant.box_updating',
            name: update[0].name,
            provider: update[2].name,
            old: box.version,
            new: update[1].version))
          @env.action_runner.run(Vagrant::Action.action_box_add, {
            box_url: box.metadata_url,
            box_provider: update[2].name,
            box_version: update[1].version,
            ui: ui,
            box_force: force,
            box_download_client_cert: download_options[:client_cert],
            box_download_ca_cert: download_options[:ca_cert],
            box_download_ca_path: download_options[:ca_path],
            box_download_insecure: download_options[:insecure]
          })
        end
      end
    end
  end
end

    
      let(:argv)     { [] }
  let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    test_iso_env.vagrantfile('')
    test_iso_env.create_vagrant_env
  end
  let(:test_iso_env) { isolated_environment }
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
    RSpec.describe RuboCop::AST::ClassNode do
  let(:class_node) { parse_source(source).ast }
    
              outermost_send = outermost_send_on_same_line(heredoc_arg)
          return unless outermost_send
          return unless outermost_send.loc.end
          return unless heredoc_arg.first_line != outermost_send.loc.end.line
    
      context 'when an access modifier has no effect' do
    it 'registers an offense' do
      expect_offense(<<~RUBY)
        class SomeClass
          def some_method
            puts 10
          end
          private
          ^^^^^^^ Useless `private` access modifier.
          def self.some_method
            puts 10
          end
        end
      RUBY
    end
  end
    
            return unless rhs
    
      include_examples 'registers an offense', 'Fixnum'
  include_examples 'registers an offense', 'Bignum'
    
            def offense_location(node)
          if node.loc.respond_to?(:end) && node.loc.end
            :end
          else
            :expression
          end
        end
      end
    end
  end
end

    
            foobar
      end
    RUBY
  end
    
    When /^I append gems from Appraisal Gemfile$/ do
  File.read(ENV['BUNDLE_GEMFILE']).split(/\n/).each do |line|
    if line =~ /^gem '(?!rails|appraisal)/
      append_to_gemfile line.strip
    end
  end
end
    
    When /^I reset Bundler environment variable$/ do
  BUNDLE_ENV_VARS.each do |key|
    ENV[key] = nil
  end
end
    
      def migration_class_name
    migration_name.camelize
  end
    
        def clear
      @attachments = Hash.new { |h,k| h[k] = {} }
    end
    
        def path
      @file.respond_to?(:path) ? @file.path : @file
    end