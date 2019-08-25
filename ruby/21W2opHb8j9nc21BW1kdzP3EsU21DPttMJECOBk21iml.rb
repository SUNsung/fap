
        
            # NOTE: `relative-dir` is not actually a 'relative dir' in this data structure
    # due to the fact that when vagrant stores synced folders, it path expands
    # them with root_dir, and when you grab those synced_folders options from
    # the machines config file, they end up being a full path rather than a
    # relative path, and so these tests reflect that.
    # For reference:
    # https://github.com/hashicorp/vagrant/blob/9c1b014536e61b332cfaa00774a87a240cce8ed9/lib/vagrant/action/builtin/synced_folders.rb#L45-L46
    let(:config_synced_folders)  { {'/vagrant':
      {type: 'rsync',
        hostpath: '/Users/brian/code/vagrant-sandbox'},
      '/vagrant/other-dir':
      {type: 'rsync',
        hostpath: '/Users/brian/code/vagrant-sandbox/other-dir'},
      '/vagrant/relative-dir':
      {type: 'rsync',
        hostpath: '/Users/brian/code/relative-dir'}}}
    
          subject.rsync_installed(machine)
    end
  end
    
          expect(result[0]).to be_kind_of(Vagrant::BoxMetadata)
      expect(result[1]).to be_kind_of(Vagrant::BoxMetadata::Version)
      expect(result[2]).to be_kind_of(Vagrant::BoxMetadata::Provider)
    
    module Vagrant
  # This class provides a way to load and access the contents
  # of a Vagrantfile.
  #
  # This class doesn't actually load Vagrantfiles, parse them,
  # merge them, etc. That is the job of {Config::Loader}. This
  # class, on the other hand, has higher-level operations on
  # a loaded Vagrantfile such as looking up the defined machines,
  # loading the configuration of a specific machine/provider combo,
  # etc.
  class Vagrantfile
    # This is the configuration loaded as-is given the loader and
    # keys to #initialize.
    attr_reader :config
    
        it 'configures without a provider or boxes' do
      register_provider('foo')