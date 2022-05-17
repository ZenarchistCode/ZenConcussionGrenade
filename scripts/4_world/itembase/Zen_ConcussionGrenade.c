class Zen_ConcussionGrenade : FlashGrenade
{
	void Zen_ConcussionGrenade()
	{
		SetAmmoType("Zen_ConcussionGrenade_Ammo");
		SetFuseDelay(4);
		SetGrenadeType(EGrenadeType.ILLUMINATING);
		SetParticleExplosion(ParticleList.GRENADE_M84);
	}

	void ~Zen_ConcussionGrenade() {}
};