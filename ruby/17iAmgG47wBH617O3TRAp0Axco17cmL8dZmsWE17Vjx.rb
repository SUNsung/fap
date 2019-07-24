
        
             'Vagrant by HashiCorp'
   end
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
    require Vagrant.source_root.join('plugins/provisioners/chef/cap/windows/chef_installed')
    
    # Add the test directory to the load path
$:.unshift File.expand_path('../../', __FILE__)
    
        # Returns the name of the machine that is designated as the
    # 'primary.'
    #
    # In the case of a single-machine environment, this is just the
    # single machine name. In the case of a multi-machine environment,
    # then this is the machine that is marked as primary, or nil if
    # no primary machine was specified.
    #
    # @return [Symbol]
    def primary_machine_name
      # If it is a single machine environment, then return the name
      return machine_names.first if machine_names.length == 1
    
        def bad_osdn_url?
      bad_url_format?(/osd/, [%r{\Ahttps?://([^/]+.)?dl\.osdn\.jp/}])
    end
    
          def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
    describe Formula do
  describe '#uses_from_macos' do
    before do
      allow(OS).to receive(:mac?).and_return(false)
    end
    
        checksums.each_pair do |cat, digest|
      subject.sha256(digest => cat)
    end
    
          its(:suggestion) { is_expected.to match(%r{brew cask install homebrew/cask-versions/adoptopenjdk8}) }
      its(:cask) { is_expected.to eq('homebrew/cask-versions/adoptopenjdk8') }
    end
    
          @locator.sdk_if_applicable(v)
    end
    
          ohai 'Installing Formula dependencies: #{not_installed.map(&:to_s).join(', ')}'
      not_installed.each do |formula|
        FormulaInstaller.new(formula).tap do |fi|
          fi.installed_as_dependency = true
          fi.installed_on_request = false
          fi.show_header = true
          fi.verbose = verbose?
          fi.prelude
          fi.install
          fi.finish
        end
      end
    end
    
    describe CurlPostDownloadStrategy do
  subject { described_class.new(url, name, version, **specs) }
    
        assert_equal (0),                                          CMath.log2(1)
    assert_in_delta (1.1609640474436813+1.5972779646881088i),  CMath.log2(1+2i)
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.log2('1') }
    
        ScratchPad.recorded.should == ['firstline\n', 'secondline\n', '\n', 'forthline']
  end
    
          gzio.mtime.should == Time.at(1)
    end
    
      it 'properly handles excessive data, byte-by-byte' do
    # add bytes, one by one
    data = @foo_deflated * 2
    data.each_byte { |d| @z << d.chr}
    @z.finish.should == 'foo' + @foo_deflated
  end
    
        @inflator.inflate(@zeros) do |chunk|
      @chunks << chunk
      break
    end
    
      def update_profile_with_omniauth( user_info )
    update_profile( self.profile.from_omniauth_hash( user_info ) )
  end
    
        def perform
      return User.none unless valid?
    
          # Inspired by https://github.com/nov/openid_connect_sample/blob/master/app/controllers/connect/clients_controller.rb#L24
      def create
        registrar = OpenIDConnect::Client::Registrar.new(request.url, params)
        client = Api::OpenidConnect::OAuthApplication.register! registrar
        render json: client.as_json(root: false)
      end
    
          def get_key_from_kid(keys, kid)
        keys.each do |key|
          return key if key.has_value?(kid)
        end
      end
    
      def respond_destroy_error
    respond_to do |format|
      format.mobile { redirect_back fallback_location: stream_path }
      format.js { head :forbidden }
      format.json { head :forbidden }
    end
  end
end

    
      def set_up_contacts
    if params[:a_id].present?
      @aspect = current_user.aspects.find(params[:a_id])
      gon.preloads[:aspect] = AspectPresenter.new(@aspect).as_json
    end
    @contacts_size = current_user.contacts.size
  end
    
    class LikesController < ApplicationController
  include ApplicationHelper
  before_action :authenticate_user!, except: :index
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          pager.replace(result)
    end
    @group_days = @notifications.group_by {|note| note.updated_at.strftime('%Y-%m-%d') }
    
        # Returns a new {Gem::Version} based on the systems `git` version.
    #
    # @return [Gem::Version]
    #
    def self.git_version
      raw_version = Executable.capture_command('git', ['--version']).first
      unless match = raw_version.scan(/\d+\.\d+\.\d+/).first
        raise 'Failed to extract git version from `git --version` (#{raw_version.inspect})'
      end
      Gem::Version.new(match)
    end
    
    module Pod
  describe Generator::ModuleMap do
    before do
      spec = fixture_spec('banana-lib/BananaLib.podspec')
      @pod_target = PodTarget.new(config.sandbox, false, {}, [], Platform.ios, [spec], [fixture_target_definition])
      @gen = Generator::ModuleMap.new(@pod_target)
    end
    
          it 'returns scopes by subspec names if they qualify and handle partial root spec presence well' do
        variants = PodVariantSet.new([
          PodVariant.new([@foo_subspec], [], [], Platform.ios),
          PodVariant.new([@root_spec, @bar_subspec], [], [], Platform.ios),
        ])
        variants.scope_suffixes.values.should == %w(Foo .root-Bar)
      end
    
          original.attributes[:snap_apps] = {
        'app1' => {
          'command' => 'command1',
        },
        'app2' => {
          'command' => 'command2',
          'daemon' => 'simple',
        },
        'app3' => {
          'command' => 'command3',
          'daemon' => 'simple',
          'plugs' => ['test-plug']
        },
      }
    
      POSTINSTALL_ACTIONS = [ 'logout', 'restart', 'shutdown' ]
  OWNERSHIP_OPTIONS = ['recommended', 'preserve', 'preserve-other']
    
      require 'pleaserun/platform/systemd'
  require 'pleaserun/platform/upstart'
  require 'pleaserun/platform/launchd'
  require 'pleaserun/platform/sysv'