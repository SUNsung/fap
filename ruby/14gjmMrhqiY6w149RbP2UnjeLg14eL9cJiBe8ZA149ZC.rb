
        
                  # Parse the options and return if we don't have any target.
          argv = parse_options(opts)
          return if !argv
    
          it 'should use the rsync --chown flag' do
        expect(Vagrant::Util::Subprocess).to receive(:execute) { |*args|
          expect(args.detect{|a| a.include?('--chown')}).to be_truthy
          rsync_result
        }
        subject.rsync_single(machine, ssh_info, opts)
      end
    
          def build_rsync_chown(opts)
        guest_path = Shellwords.escape(opts[:guestpath])
        if(opts[:exclude] && !Array(opts[:exclude]).empty?)
          exclude_base = Pathname.new(opts[:guestpath])
          exclusions = Array(opts[:exclude]).map do |ex_path|
            ex_path = ex_path.slice(1, ex_path.size) if ex_path.start_with?(File::SEPARATOR)
            '-path #{Shellwords.escape(exclude_base.join(ex_path))} -prune'
          end.join(' -o ') + ' -o '
        end
        'find #{guest_path} #{exclusions}' \
          ''!' -type l -a ' \
          ''(' ! -user #{opts[:owner]} -or ! -group #{opts[:group]} ')' -exec ' \
          'chown #{opts[:owner]}:#{opts[:group]} '{}' +'
      end
    end
  end
end

    
    module VagrantPlugins
  module Chef
    module Provisioner
      # This class is a base class where the common functionality shared between
      # chef-solo and chef-client provisioning are stored. This is **not an actual
      # provisioner**. Instead, {ChefSolo} or {ChefServer} should be used.
      class Base < Vagrant.plugin('2', :provisioner)
        include Vagrant::Util
        include Vagrant::Util::Presence
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
      let(:iso_env) { isolated_environment }
  let(:env) { iso_env.create_vagrant_env }
    
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
    
      # Setup a color scheme called 'bright' than can be used to add color codes
  # to the pattern layout. Color schemes should only be used with appenders
  # that write to STDOUT or STDERR; inserting terminal color codes into a file
  # is generally considered bad form.
  Logging.color_scheme('bright',
                       levels:  {
                         info:  :green,
                         warn:  :yellow,
                         error: :red,
                         fatal: %i(white on_red)
                       },
                       date:    :blue,
                       logger:  :cyan,
                       message: :magenta
                      )
    
      def down
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id
  end
    
    class PolymorphicMentions < ActiveRecord::Migration[4.2]
  def change
    remove_index :mentions, column: %i(post_id)
    remove_index :mentions, column: %i(person_id post_id), unique: true
    rename_column :mentions, :post_id, :mentions_container_id
    add_column :mentions, :mentions_container_type, :string
    add_index :mentions,
              %i(mentions_container_id mentions_container_type),
              name:   'index_mentions_on_mc_id_and_mc_type',
              length: {mentions_container_type: 191}
    add_index :mentions,
              %i(person_id mentions_container_id mentions_container_type),
              name:   'index_mentions_on_person_and_mc_id_and_mc_type',
              length: {mentions_container_type: 191},
              unique: true
    
      end
    
      describe '#create' do
    let(:like_hash) {
      {post_id: @target.id}
    }
    
      describe '#create' do
    it 'redirects to /stream for a non-mobile user' do
      post :create, params: {user: {remember_me: '0', username: @user.username, password: 'evankorth'}}
      expect(response).to be_redirect
      expect(response.location).to match /^#{stream_url}\??$/
    end